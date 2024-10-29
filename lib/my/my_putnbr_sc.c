/*
** EPITECH PROJECT, 2024
** my put nbr sc
** File description:
** print your number in the scientific version
*/

#include <stdio.h>
#include "my.h"

int nota_sc(int dot)
{
    int nbcara = 0;

    my_putchar('e');
    if (dot == 0) {
        my_putstr("+00");
        nbcara = nbcara + 2;
        return nbcara;
    }
    if (dot < 11 && dot > -11) {
        if (dot > 0) {
            my_putstr("+0");
            nbcara = (my_put_nbr(dot - 1) + 2);
        } else {
            my_putstr("-0");
            nbcara = (my_put_nbr(dot * -1 - 1) + 2);
        }
    } else {
        if (dot > 0) {
            my_putstr("+");
            nbcara = (my_put_nbr(dot - 1));
        } else {
            my_putstr("-");
            nbcara = (my_put_nbr(dot * -1 - 1));
        }
    }
    return nbcara;
}

double posi(double n)
{
    if (n < 0) {
        n = n * -1;
        my_putchar('-');
    }
    return n;
}

int my_putnbr_sc(double n, long pre)
{
    long div = 1;
    int dot = 0;
    double posn = posi(n);
    double temp = posn;

    if (temp > 9) {
        while (temp > 9) {
            temp = posn / div;
            div = div * 10;
            dot++;
            printf("%ld %f %ld\n", pre, temp, pre * 10);
            //if (temp > pre * 10 && temp < pre * 100)
                //temp = my_round(temp, 10);
        }
    } else if (temp > 0) {
        while (temp < 1) {  
            temp = posn * div;
            div = div * 10;
            dot--;
        }
    }
    printf("%f\n", temp);
    return (my_put_float(temp, pre) + nota_sc(dot));
}

int main(void) 
{
    double a = 12468367;
    printf("printf: %e\n", a);
    my_putnbr_sc(a, 1000000);
}

//gere grand chiffre
//gere round 