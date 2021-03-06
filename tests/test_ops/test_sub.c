/*
** EPITECH PROJECT, 2020
** test_add
** File description:
** test add
*/

#include <criterion/criterion.h>
#include <my_str.h>
#include <my_numformat.h>
#include <my_stdlib.h>

char *my_sub(char const *s1, char const *s2);

Test(my_sub, five_minus_five)
{
    cr_assert_str_eq(my_sub(my_strdup("5"), my_strdup("5")), "0");
}

Test(my_sub, five_minus_six)
{
    cr_assert_str_eq(my_sub(my_strdup("5"), my_strdup("6")), "-1");
}

Test(my_sub, six_minus_five)
{
    cr_assert_str_eq(my_sub(my_strdup("6"), my_strdup("5")), "1");
}

Test(my_sub, sub_high_numbered)
{
    cr_assert_str_eq(my_sub(my_strdup("45005"), my_strdup("5858")), "39147");
}

Test(my_sub, sub_high_numbered_neg)
{
    cr_assert_str_eq(my_sub(my_strdup("5858"), my_strdup("45005")), "-39147");
}

Test(my_sub, right_has_less_digits_than_left)
{
    cr_assert_str_eq(my_sub(my_strdup("2"), my_strdup("690")), "-688");
}

Test(my_sub, left_has_less_digits_than_right)
{
    cr_assert_str_eq(my_sub(my_strdup("2895"), my_strdup("6")), "2889");
}

Test(my_sub, big_number)
{
    cr_assert_str_eq(my_sub(my_strdup("25622125654"), my_strdup("256355")), "25621869299");
}

Test(my_sub, big_number_1_neg)
{
    cr_assert_str_eq(my_sub(my_strdup("-25622125654"), my_strdup("256355")), "-25622382009");
}
