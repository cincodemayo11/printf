#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
       char c;
       char *str;

       c = 'f';
       str = "Hello";

	_printf("This is a test");
	_printf("This is letter %c it is the third one", c);
	_printf("This is a greeting %s it is used all over", str);
	_printf("This %% is a percent sign");
	
	return (0);
}
