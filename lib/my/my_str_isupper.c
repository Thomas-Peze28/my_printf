/*
** EPITECH PROJECT, 2024
** my_str_isupper
** File description:
** Return if string contains only upper char
*/

#include "my.h"

int my_str_isupper(char const *str)
{
    if (my_strlen(str) == 0) {
        return 1;
    }
    for (int count = 0; count <= my_strlen(str); count++) {
        if (str[count] < 'A' || str[count] > 'Z'){
            return 0;
        } else {
            return 1;
        }
    }
}
