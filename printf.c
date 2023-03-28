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
				if (*format == 'c')
				{
					printf("%c", va_arg(list, int));
					length++;
				}
				else if (*format == 's')
				{
					print_string(va_arg(list, char *), length);
				}
				else if (*format == '%')
				{
					printf("%%");
					length++;
				}
				format++;
			}
			else
			{
				printf("%c", *format);
				length++;
				format++;
			}
		}
	}
	else
	{
		length += length;
	}
	return (length);
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
		putchar(string[i]);
		length++;
	}
	return (0);
}
