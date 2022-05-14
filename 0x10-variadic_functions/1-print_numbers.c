#include "variadic_functions.h"
#include <strdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * print_numbers - print number passed in the parameter
  * @separator: separate the number
  * @ n: amount of numbers to be printed
  * Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(numbers, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	
	va_end(numbers);

	printf("\n");
	
}

