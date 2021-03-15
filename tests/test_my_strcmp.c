/*
** EPITECH PROJECT, 2021
** test unitaire
** File description:
** test_my_strlen
*/

#include "unit_header.h"

Test(test_my_strcmp, should_success_if_my_strcmp_have_a_good_result)
{
    const char *test = "test";
    const char *test2 = "test";
    cr_assert_eq(my_strcmp(test, test2), 0, "Error : my_strcmp expected %s, received : %s\n", test, test2);
}
