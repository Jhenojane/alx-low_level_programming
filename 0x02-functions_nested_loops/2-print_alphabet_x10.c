#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Check description
 * Description: It prints the word Holberton, followed by a new line.
 * Return: 0.
 */

void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)

	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar (c);
		_putchar('\n');

	}
}

