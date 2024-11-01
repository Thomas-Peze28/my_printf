/*
** EPITECH PROJECT, 2024
** my_putstr
** File description:
** Return str
*/
#include <stdarg.h>
#include <stdio.h>
#include "my.h"

int my_putstr(char const *str)
{
    int count = 0;
    if (str == NULL) {
        my_putchar('(');
        my_putchar('n');
        my_putchar('u');
        my_putchar('l');
        my_putchar('l');
        my_putchar(')');
        my_putchar('\0');
        return 0;
    }
    while (str[count] != '\0') {
        my_putchar(str[count]);
        count++;
    }
    return 0;
}
