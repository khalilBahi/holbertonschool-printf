#include "main.h"
/**
 * _printf - printf function that print character, integer and string
 * @format: variable
 * Return: -1,j,0
 */
int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int i = 0, j = 0;

	if (format == NULL)
		return (-1);
 
	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);

			else if (format[i + 1] == '%')
			{
				_putchar('%');
				j++;
				i++;
			}
			else if (print_all(format[i + 1]) != NULL)
			{
				j += (print_all(format[i + 1]))(ap);
				i++;
			}
			else
			{
				_putchar(format[i]);
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			j++;
		}
	}
	va_end(ap);
	return (j);
}
