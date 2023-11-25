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
 * Return: i
 */

int print_string(va_list arg)
{
    int i;
    char *str = va_arg(arg, char *);

    if (str == NULL)
    {
        write(1, "(null)", 6);
        return (6);
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

int print_integer(va_list arg)
{

    int num = va_arg(arg, int);
    int r = 0, last_digit;
    int i = 0;

    if (num < 0)
    {
        _putchar('-');
        num = -num;
        i++;
    }
    else
    {
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
            i++;
        }
    }
    return (i);
}
