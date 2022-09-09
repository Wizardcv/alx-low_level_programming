#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * main - print if number is > 5, == 0 or < 6 not 0
 *
 * Description: using the main function
 * this program prints number is > 5, == 0 or < 6 not 0
 * Return: 0 betty style doc for function main goes there 
*/
int main(void)
{
int n;
int x;

srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;

if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, x);
}
else if (n == 0)
{
printf("Last digit of %d is %d and is 0\n", n, x);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
}
return (0);
}
