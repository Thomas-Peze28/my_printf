/*
** EPITECH PROJECT, 2024
** my_strcapitalize
** File description:
** Lower case of string
*/

#include "my.h"

char *my_strcapitalize(char *str)
{
    for (int count = 0; count <= my_strlen(str); count++) {
        if (str[count - 1] == ' ' && (str[count] >= 'a' && str[count] <= 'z'
        && str[count] != ' ') || count == 0) {
            str[count] = str[count] - 32;
        }
    }
    return str;
}
