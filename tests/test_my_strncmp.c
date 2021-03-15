/*
** EPITECH PROJECT, 2021
** test unitaire
** File description:
** test_my_strlen
*/

#include "unit_header.h"

Test(test_my_strncmp, should_success_if_my_strncmp_have_a_good_result)
{
    const char *test = "test";
    const char *test2 = "test";
    cr_assert_eq(my_strncmp(test, test2, 2), 0, "Error : my_strncmp expected %s, received : %s\n", test, test2);
}
