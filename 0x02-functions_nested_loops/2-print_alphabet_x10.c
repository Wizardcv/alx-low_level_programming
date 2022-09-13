#include "main.h"
/**
 * print_alphabet_x10 - function to print the alphabets 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
char b, i;

for (i = 0; i <= 9; i++)
{
for (b = 'a'; b <= 'z'; b++)  
{
_putchar (b);
}
}
_putchar ('\n');
}
