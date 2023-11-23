#include "main.h"
/**
 * print_character - printf function
 * Return: -1,0
 */

int print_character(va_list arg)
{

    int ch = va_arg(arg, int);

    if (ch < 0 || ch > 127)
    {
        return (-1);
    }

    _putchar(ch);
    return (0);
}
/**
 * print_string - printf function
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

    return (0);
}
