#include <stdio.h>
/**
 * main - A program that prints the size of various type
 * Return:0 (success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of a char: %d byte(s)\n", (usigned long)sizeof(a));
printf("Size of a int: %d byte(s)\n", (usigned long)sizeof(b));
printf("Size of a long int: %d byte(s)\n", (usigned long)sizeof(c));
printf("Size of a long long int: %d byte(s)\n", (usigned long)sizeof(d));
printf("Size of a float: %d byte(s)\n", (usigned long)sizeof(f));
return (0);
}
