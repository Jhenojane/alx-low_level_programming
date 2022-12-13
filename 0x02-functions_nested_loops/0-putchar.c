#include <stdio.h>
#include "main.h"

/**
 * main - Check description
 * Description: It prints the word Holberton, followed by a new line.
 * Return: 0.
 */

int main(void) {
	char aputchar[] = { '_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int length =sizeof(aputchar) / sizeof(aputchar[0]);    
	int i;
		for(i = 0; i < length; i++) 
			_putchar(aputchar[i]);
		
		_putchar('\n');


return (0);
}
