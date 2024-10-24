/*
** EPITECH PROJECT, 2024
** my_putnbr_base
** File description:
** Convert a decimal number into an another base given
*/
#include <stdlib.h>
#include "my.h"

int my_putnbr_base(int nbr, char const *base)
{
    int rest = 0;
    int base_num = my_strlen(base);
    char* result;
    int i = 0;
    int isneg = 0;
    
    result = malloc(0);
    if (nbr == 0) {
        my_put_nbr(0);
        return 0;
    }
    if (nbr < 0) {
        nbr = -(nbr);
        isneg = 1;
    }
    while(nbr != 0) {
        rest = nbr % base_num;
        nbr  = nbr / base_num;
        result[i] += base[rest];
        i++;
    }
    if (isneg == 1) {
        result[i] += '-';
    }
    my_revstr(result);
    my_putstr(result);
    return my_strlen(result);
}
