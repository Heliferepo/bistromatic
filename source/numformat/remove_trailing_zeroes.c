/*
** EPITECH PROJECT, 2020
** remove_trailing_zeroes
** File description:
** Source code
*/

#include <my_str.h>

char *remove_trailing_zeroes(char *str)
{
    int i = my_strlen(str) - 1;

    while (str[i] == '0' && i != 0) {
        str[i] = '\0';
        i--;
    }
    return (str);
}
