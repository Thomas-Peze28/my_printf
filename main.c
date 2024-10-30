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
    int len;
    int len2;

    my_printf("h %d %n %s %n\n", 10, &len, "World", &len2);
    my_printf("%s %X\n", "Conv:", 61);
    my_printf("\n");
    return 0;
}
