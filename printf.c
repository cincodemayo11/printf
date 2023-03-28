#include "main.h"

/**
  * _printf - prints output
  * @format: string input
  *
  * Return: Number of characters printed
  */

int _printf(const char *format, ...)
{
	va_list list;
	int length = 0;

	va_start(list, format);
	if (format != NULL)
	{
		while (*format != '\0')
		{
			if (*format == '%')
			{
				format++;
				if (*format == ' ')
				{
					return (length);
				}
				else if (*format == 'c')
				{
					length += _putchar(va_arg(list, int));
				}
				else if (*format == 's')
				{
					print_string(va_arg(list, char *), length);
				}
				else if (*format == 'd')
				{
					length += printf("%d", va_arg(list, int));
				}
				else if (*format == 'i')
				{
					length += printf("%i", va_arg(list, int));
				}
				else if (*format == '%')
				{
					length += _putchar('%');
				}
				format++;
			}
			else
			{
				length += _putchar(*format);
				format++;
			}
		}
	}
	else
	{
		return (length);
	}
	return (length);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
  * print_string - print a string
  * @string: the string to be printed
  * @length: variable to hold the length of the string
  *
  * Return: 0
  */
int print_string(char *string, int length)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
		length++;
	}
	return (0);
}

/*int print_int(int *number, int length)
{
	int i;

	for (i = 1 < length; i++)
	{
		number[i] = number[i]/(10^number[i]);
		}*/
