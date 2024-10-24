/*
** EPITECH PROJECT, 2024
** mini_printf
** File description:
** a easy version of printf
*/

#include <stdarg.h>
#include "my.h"

int witch_f_follow(char fonction, va_list ap)
{
    switch (fonction) {
    case 'd':
        return my_put_nbr(va_arg(ap, int));
    case 'i':
        return my_put_nbr(va_arg(ap, int));
    case 'f':
        return my_put_float(va_arg(ap, double),1);
    default:
        return 0;
    }
}

int witch_f(char fonction, va_list ap)
{
    char *str;

    switch (fonction) {
    case 'c':
        my_putchar(va_arg(ap, int));
        return 1;
    case 's':
        str = va_arg(ap, char *);
        my_putstr(str);
        return (my_strlen(str));
    case '%':
        my_putchar('%');
        return 1;
    case 'x':
        return my_putnbr_base(va_arg(ap, int), "0123456789abcdef");
    case 'X':
        return my_putnbr_base(va_arg(ap, int), "0123456789ABCDEF");
    case 'o':
        return my_putnbr_base(va_arg(ap, int), "01234567");
    case 'u':
        return my_putnbr_base(va_arg(ap, int), "0123456789");
    default:
        return witch_f_follow(fonction, ap);
    }
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
            nbcara += witch_f(format[i + 1], ap);
            i++;
        }
        i++;
    }
    my_putchar('\n');
    my_put_nbr(nbcara);
    my_putchar('\n');
    va_end(ap);
    return nbcara;
}
