/*
** EPITECH PROJECT, 2024
** mini_printf
** File description:
** a easy version of printf
*/

#include <stdarg.h>
#include "include/my.h"

int witch_f(char fonction, va_list ap)
{
    char *str;

    if (fonction == 'd' || fonction == 'i') {
        return my_put_nbr(va_arg(ap, int));
    }
    if (fonction == 'c') {
        my_putchar(va_arg(ap, int));
        return 1;
    }
    if (fonction == 's') {
        str = va_arg(ap, char *);
        my_putstr(str);
        return (my_strlen(str));
    }
    if (fonction == '%') {
        my_putchar('%');
        return 1;
    }
    return 0;
}

int my_printf(const char *format, ...)
{
    va_list ap;
    int i = 0;
    int nbcara = 0;

    va_start(ap, format);
    while (format[i] != '\0') {
        if (format[i] != '%') {
            my_putchar(format[i]);
            nbcara++;
        } else {
            nbcara = nbcara + witch_f(format[i + 1], ap);
            i++;
        }
        i++;
    }
    va_end(ap);
    return nbcara;
}
