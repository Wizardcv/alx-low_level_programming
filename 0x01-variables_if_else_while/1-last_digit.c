#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** main - print if number is > 5, == 0 or < 6 not 0
 *
 * Description: using the main function
 * this program prints number is > 5, == 0 or < 6 not 0
 * Return: 0 betty style doc for function main goes there 
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 5)
{
printf("The last digit of %d is greater than 5\n", n);
}
else if (n == 0)
{
printf("The last digit of %d is 0\n", n);
}
else 
{
printf("The last digit of %d is less than 6 and not 0\n", n);
}
return (0);
}
