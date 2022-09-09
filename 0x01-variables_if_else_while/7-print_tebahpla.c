#include <stdio.h>
/**
 * main - print alphabets in reverse order
 *
 * Description: using the main function
 * this program prints alphabets
 * Return: 0
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
