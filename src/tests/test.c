#include <check.h>
#include "../backend.h"

// Глобальные переменные для хранения имен тестов
const char* test_names[100];  // Максимальное количество тестов
int test_count = 0;

// Макрос для добавления теста и сохранения его имени
#define ADD_TEST(tc, test)            \
  do {                                \
    tcase_add_test(tc, test);         \
    test_names[test_count++] = #test; \
  } while (0)

// ANSI escape коды для цветов текста
#define COLOR_GREEN "\033[32m"
#define COLOR_RED "\033[31m"
#define COLOR_RESET "\033[0m"

// Тесты

START_TEST(test_open_file)
{
    FILE *file = open_file("test.obj");
    ck_assert_ptr_nonnull(file);
    fclose(file);
}
END_TEST

START_TEST(test_check_digit)
{
    int result = check_digit("f 1 2 3 4");
    ck_assert_int_eq(result, 5);
}
END_TEST

START_TEST(test_parse_vertex)
{
    Vertex vertex;
    parse_vertex("v 1.0 2.0 3.0\n", &vertex, 0.0, 0.0, 0.0, 1.0);
    ck_assert_float_eq(vertex.x, 1.0);
    ck_assert_float_eq(vertex.y, 2.0);
    ck_assert_float_eq(vertex.z, 3.0);
}
END_TEST

START_TEST(test_parse_face)
{
    Face face;
    parse_face("f 1 2 3 4\n", &face, 4);

    // Проверка индексов вершин
    ck_assert_int_eq(face.vertices[0], 1);
    ck_assert_int_eq(face.vertices[1], 2);
    ck_assert_int_eq(face.vertices[2], 3);
    ck_assert_int_eq(face.vertices[3], 4);

    // Освобождение памяти
    free(face.vertices);
}
END_TEST

START_TEST(test_find_extremes)
{
    FILE *file = fopen("test_extremes.obj", "w");
    fprintf(file, "v 1.0 2.0 3.0\nv -1.0 -2.0 -3.0\n");
    fclose(file);

    file = open_file("test_extremes.obj");
    float maxAbsValue, minX, minY, minZ, maxX, maxY, maxZ;
    find_extremes(file, &maxAbsValue, &minX, &minY, &minZ, &maxX, &maxY, &maxZ);
    fclose(file);

    ck_assert_float_eq(maxAbsValue, 3.0);
}
END_TEST

START_TEST(test_rotate_vertex)
{
    Vertex vertex = {1.0, 0.0, 0.0};
    rotate_vertex(&vertex, 0.0, M_PI/2, 0.0);
    ck_assert_float_eq_tol(vertex.x, 0.0, 1e-6);
    ck_assert_float_eq_tol(vertex.y, 0.0, 1e-6);
    ck_assert_float_eq_tol(vertex.z, -1.0, 1e-6);
}
END_TEST

START_TEST(test_scale_vertex)
{
    Vertex vertex = {1.0, 1.0, 1.0};
    scale_vertex(&vertex, 2.0);
    ck_assert_float_eq(vertex.x, 2.0);
    ck_assert_float_eq(vertex.y, 2.0);
    ck_assert_float_eq(vertex.z, 2.0);
}
END_TEST

START_TEST(test_move_vertex)
{
    Vertex vertex = {1.0, 1.0, 1.0};
    move_vertex(&vertex, 1.0, -1.0, 1.0);
    ck_assert_float_eq(vertex.x, 2.0);
    ck_assert_float_eq(vertex.y, 0.0);
    ck_assert_float_eq(vertex.z, 2.0);
}
END_TEST

Suite* viewer_suite(void) {
  Suite* s;
  TCase* tc_core;

  s = suite_create("3Dviewer");

  tc_core = tcase_create("Core");

  // Объявления для тестов
  ADD_TEST(tc_core, test_open_file);
  ADD_TEST(tc_core, test_check_digit);
  ADD_TEST(tc_core, test_parse_vertex);
  ADD_TEST(tc_core, test_parse_face);
  ADD_TEST(tc_core, test_find_extremes);
  ADD_TEST(tc_core, test_rotate_vertex);
  ADD_TEST(tc_core, test_scale_vertex);
  ADD_TEST(tc_core, test_move_vertex);

  suite_add_tcase(s, tc_core);

  return s;
}

int main(void) {
  int number_failed;
  int total_tests;
  Suite* s;
  SRunner* sr;

  s = viewer_suite();
  sr = srunner_create(s);

  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  total_tests = srunner_ntests_run(sr);

  TestResult** all_results = srunner_results(sr);

  printf("\n------------------------------------\n");
  for (int i = 0; i < total_tests; i++) {
    const char* test_name = test_names[i];
    if (tr_rtype(all_results[i]) == CK_PASS) {
      printf("Тест %s - " COLOR_GREEN "Пройден" COLOR_RESET "\n", test_name);
    } else {
      printf("Тест %s - " COLOR_RED "Провален" COLOR_RESET "\n", test_name);
    }
  }

  free(all_results);

  printf("------------------------------------\n");
  printf("Всего тестов: %d\n", total_tests);
  printf("Провалено тестов: %d\n", number_failed);
  printf("------------------------------------\n");

  srunner_free(sr);

  return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
