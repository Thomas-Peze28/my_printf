/*
** EPITECH PROJECT, 2024
** my_put_float
** File description:
** print a float
*/

#include "my.h"

void my_put_float(float n)
{
    int fristNum = (int)n;
    int reminder;

    my_put_nbr(fristNum);
    my_putchar('.');
    n = n * 100;
    reminder = (int)n % 100;
    if (reminder < 10) {
        my_putchar('0');
    }
    my_put_nbr(reminder);
}
