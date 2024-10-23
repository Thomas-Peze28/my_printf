/*
** EPITECH PROJECT, 2024
** my_str_isprintable
** File description:
** Return if string a string is printable
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    for (int count = 0; count <= nb; count++) {
        dest[my_strlen(dest)+count] = src[count];
    }
    return dest;
}
