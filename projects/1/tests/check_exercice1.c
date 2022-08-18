#include <check.h>

START_TEST (exercice1)
{

  /**/

}
END_TEST

Suite * exercice1_suite(void) {
  Suite *s;
  TCase *tc_core;

  s = suite_create("Exercice1");

  tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_exercice1_create);
  suite_add_tcase(s, tc_core);

  return s;
}

int main(void)
{
    int number_failed;
    Suite *s;
    SRunner *sr;

    s = exercice1_suite();
    sr = srunner_create(s);

    srunner_run_all(sr, CK_NORMAL);
    number_failed = srunner_ntests_failed(sr);
    srunner_free(sr);
    return (number_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
