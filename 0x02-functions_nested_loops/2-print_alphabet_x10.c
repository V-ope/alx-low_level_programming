#include "main.h"

/**
 * print_alphabet_x10 - prints alpha 10 times
 */

void print_alphabet_x10(void)
{
	int ten;
	char vo;

	for (ten = 0; ten <= 9; ten++)
	{
		for (vo = 'a'; vo <= 'Z'; vo++)
			_putchar(vo);
		_putchar('\n');
	}
}
