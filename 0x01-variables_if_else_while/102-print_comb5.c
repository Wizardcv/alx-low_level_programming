#include <stdio.h>

/**
 * main - Prints three combination of numbers
 *
 * Return: 0
 */
int main(void)
{
int c, n, o, j;

for (c = 48; c <= 57; c++)
{
for (n = 48; n <= 57; n++)
{
for (o = 48; o <= 57; o++)
{
for (j = 48; j <= 57; j++)
{
if (((o + j) > (c + n) &&  o >= c) || c < o)
{
putchar(c);
putchar(n);
putchar(' ');
putchar(o);
putchar(j);

if (c + n + o + j == 227 && c == 57)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
}

putchar('\n');

return (0);
}
