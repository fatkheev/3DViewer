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

// Тесты для калькуляции

START_TEST(test_check_digit)
{
    int result = check_digit("1 2 3 4 5");
    ck_assert_int_eq(result, 5);
}
END_TEST

START_TEST(test_rotate_vertex)
{
    Vertex vertex = {1.0f, 0.0f, 0.0f};
    rotate_vertex(&vertex, 0, 0, 1.5707963268f);  // 90 degrees in radians
    ck_assert_float_eq_tol(vertex.x, 0.0f, 0.0001f);
    ck_assert_float_eq_tol(vertex.y, 1.0f, 0.0001f);
}
END_TEST

START_TEST(test_move_vertex)
{
    Vertex vertex = {1.0f, 1.0f, 1.0f};
    move_vertex(&vertex, 1.0f, 1.0f, 1.0f);
    ck_assert_float_eq_tol(vertex.x, 2.0f, 0.0001f);
    ck_assert_float_eq_tol(vertex.y, 2.0f, 0.0001f);
    ck_assert_float_eq_tol(vertex.z, 2.0f, 0.0001f);
}
END_TEST

Suite* viewer_suite(void) {
  Suite* s;
  TCase* tc_core;

  s = suite_create("3Dviewer");

  tc_core = tcase_create("Core");

  // Объявления для тестов
  ADD_TEST(tc_core, test_check_digit);
  ADD_TEST(tc_core, test_rotate_vertex);
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
