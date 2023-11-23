#include "main.h"
/**
 * print_character - printf character
 * Return: -1,1
 */

int print_character(va_list arg)
{

    int ch = va_arg(arg, int);

    if (ch < 0 || ch > 127)
    {
        return (-1);
    }

    _putchar(ch);
    return (1);
}
/**
 * print_string - printf string
 * Return: void
 */

int print_string(va_list arg)
{
    int i;
    char *str = va_arg(arg, char *);

    if (str == NULL)
    {
        return (-1);
    }

    for (i = 0; str[i] != '\0'; i++)
    {
        _putchar(str[i]);
    }

    return (i);
}
/**
 * print_integer - printf integer
 * Return: 0
 */

int print_integer(va_list argument)
{

    int num = va_arg(argument, int);
    int num_neg = 0, r = 0, last_digit;

    if (num < 0)
    {
        num_neg = 1;
        num = -num;
    }

    if (num_neg)
    {
        _putchar('-');
    }

    while (num > 0)
    {
        r = r * 10 + num % 10;
        num = num / 10;
    }

    while (r > 0)
    {
        last_digit = r % 10;
        _putchar(last_digit + '0');
        r = r / 10;
    }

    return (0);
}
