/*
** EPITECH PROJECT, 2024
** main
** File description:
** main
*/

#include "include/my.h"

int main(void)
{
    int len;
    int len2;
    my_printf("h %d %n %s %n\n", 10, &len, "World", &len2);
    my_printf("%s %X\n", "Conv:", 61);
    my_printf("Longueur de la premiere print : %d , la deuxieme est %d\n", len, len2);
    return 0;
}
