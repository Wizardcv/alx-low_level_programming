#include <stdio.h>
/**
 * main - printing numbers from 0-9 with commas and space
 * Description: using the main function
 * this program prints numbers with comma
 * Return: 0
 */
int main(void)
{
int c;

for (c = 48; c <= 57; c++)
{
putchar(c);
if (c != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
