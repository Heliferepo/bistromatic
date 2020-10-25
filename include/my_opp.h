/*
** EPITECH PROJECT, 2020
** my_opp
** File description:
** opp_desc
*/

#ifndef OPP_H
#define OPP_H
char *my_add(char const *str1, char const *str2);
char *my_add_exception(char const *str1, char const *str2);
char *my_sub(char const *str1, char const *str2);
char *my_sub_exception(char const *str1, char const *str2);
char *my_mul(char const *str1, char const *str2);
char *my_div(char const *str1, char const *str2);
char *op_parser(char *str1, char *str2, char operator);
char my_get_sign(char *str1, char *str2);

struct operator_linker {
    char operation;
    char *(*calculation_process)(char *, char *);
};

#endif
