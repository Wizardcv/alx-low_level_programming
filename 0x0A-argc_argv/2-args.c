#include <stdio.h>

/**
* main - Prints all arguments it receives.
* @argc: Number of arguments in the program.
* @argv: Array of pointers to the arguments.
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int arg;

for (arg = 0; arg < argc; arg++)
printf("%s\n", argv[arg]);

return (0);
}
