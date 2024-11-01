#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, simple_hello_world, .init=redirect_all_std)
{
    my_printf("Hello World.\n");
    cr_assert_stdout_eq_str("Hello World.\n");
}

Test(my_printf, test_char, .init=redirect_all_std)
{
    my_printf("Character: %c\n", 'Z');
    cr_assert_stdout_eq_str("Character: Z\n");
}

Test(my_printf, string_empty, .init=redirect_all_std)
{
    my_printf("Empty string: %s\n", "");
    cr_assert_stdout_eq_str("Empty string: \n");
}

Test(my_printf, string_null, .init=redirect_all_std)
{
    my_printf("Null string: %s\n", NULL);
    cr_assert_stdout_eq_str("Null string: (null)\n");
}

Test(my_printf, string_long, .init=redirect_all_std)
{
    my_printf("Long string: %s\n", "This is a longer test string.");
    cr_assert_stdout_eq_str("Long string: This is a longer test string.\n");
}

Test(my_printf, integer_large_positive, .init=redirect_all_std)
{
    my_printf("Large integer: %d\n", 2147483647);
    cr_assert_stdout_eq_str("Large integer: 2147483647\n");
}

Test(my_printf, integer_large_negative, .init=redirect_all_std)
{
    my_printf("Negative large integer: %d\n", -2147483647);
    cr_assert_stdout_eq_str("Negative large integer: -2147483647\n");
}

Test(my_printf, integer_zero, .init=redirect_all_std)
{
    my_printf("Integer zero: %d\n", 0);
    cr_assert_stdout_eq_str("Integer zero: 0\n");
}

Test(my_printf, percent_sign, .init=redirect_all_std)
{
    my_printf("100%% certain\n");
    cr_assert_stdout_eq_str("100% certain\n");
}

Test(my_printf, integer_hex_lowercase, .init=redirect_all_std)
{
    my_printf("Hexadecimal: %x\n", 255);
    cr_assert_stdout_eq_str("Hexadecimal: ff\n");
}

Test(my_printf, integer_hex_uppercase, .init=redirect_all_std)
{
    my_printf("Hexadecimal: %X\n", 255);
    cr_assert_stdout_eq_str("Hexadecimal: FF\n");
}

Test(my_printf, integer_octal, .init=redirect_all_std)
{
    my_printf("Octal: %o\n", 255);
    cr_assert_stdout_eq_str("Octal: 377\n");
}

Test(my_printf, pointer_valid, .init=redirect_all_std)
{
    int x = 42;
    my_printf("Pointer: %p\n", &x);
}

Test(my_printf, multiple_mixed_arguments, .init=redirect_all_std)
{
    my_printf("Mult: %d %s %c %f\n", 10, "tests", '!', 3.14);
    cr_assert_stdout_eq_str("Mult: 10 tests ! 3.140000\n");
}
