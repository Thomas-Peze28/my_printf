/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/

#include "include/my.h"
#include <stdio.h>
#include <unistd.h>
#include <limits.h>

int main(void)
{
    printf("Son Unsigned int : %u\n", 50);
    my_printf("Mon unsigned int : %u\n\n", 50);
    printf("Son Unsigned int : %u\n", -1);
    my_printf("Mon unsigned int : %u\n\n", -1);
    printf("Son Unsigned int : %u\n", -10);
    my_printf("Mon unsigned int : %u\n\n", -10);

    return 0;
}
