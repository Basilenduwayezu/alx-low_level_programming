#include "main.h"

/**
 *  print_alphabet_x10 - prints 10 times the alphabet
 *  
 *  Return: Always 0 (sucess)
 */
 
void print_alphabet_x10(void)
{
	int m;

	int i;

	for (i = 0; i < 10; i++)

{
	for (m = 'a'; m <= 'z'; m++)
	{
		_putchar(m);
	}
	_putchar('\n');
}
}

