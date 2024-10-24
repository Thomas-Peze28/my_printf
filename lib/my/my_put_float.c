/*
** EPITECH PROJECT, 2024
** my_put_float
** File description:
** print a float
*/

#include "my.h"

int my_put_float(double n)
{
    int fristNum = (int)n;
    int reminder;
    int nbcara;

    nbcara = my_put_nbr(fristNum);
    my_putchar('.');
    nbcara++;
    n = n * 1000000;
    reminder = (int)n % 1000000;
    if (reminder < 10) {
        my_putchar('0');
        nbcara++;
    }
    nbcara = my_put_nbr(reminder);
    return nbcara;
}
