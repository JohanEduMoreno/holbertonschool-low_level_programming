#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)
{
	int x = '0';

	while (x <= '9')
	{
	putchar(x);
	if (x != '9')
	{
	putchar(',');
	putchar(' ');
	}
	x++;
	}

	putchar(10);
	return (0);
}
