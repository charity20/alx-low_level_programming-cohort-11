#include "main.h"

/**
 * print_alphabet_x10 -> prints alphabet in 10 places
 *
 * prints_alphabet_x10 -> prints the lower case
 *
 * Return: Always 0 (success)
 *
 */
void print_alphabet_x10(void)
{
	int loop = 0;

	while (loop < 10)

	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');

		loop++;
	}
}
