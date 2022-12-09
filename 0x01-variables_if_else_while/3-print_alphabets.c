#include <stdio>

/**
 * main - prints the alphabet in lowewercase, and then in uppercase,
 * followed by a new line
 * Return: Always o (Success)
 */
int main(void)
{
	int ch
		;
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
