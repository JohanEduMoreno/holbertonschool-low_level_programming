#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
	{
	_putchar(-d + '0');
	return (-d);
	}
	else
	{
	_putchar(d + '0');
	return (d);
	}
}
