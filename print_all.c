#include "main.h"
/**
 * print_all - chose the right function
 * @ch: character
 * Return: 0
 */
int (*print_all(const char ch))(va_list)
{
	int kk = 0;

	list_t printf[] = {
		{'c', print_character},
		{'s', print_string},
		{'d', print_integer},
		{'i', print_integer},
		{'\0', NULL}};

	while (printf[kk].specifiers != '\0')
	{
		if (ch == (printf[kk].specifiers))
		{
			return (printf[kk].f);
		}
		kk++;
	}
	return (0);
}