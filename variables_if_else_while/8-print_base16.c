#include <stdio.h>
/**
* main - prints all the numbers of base 16 in lowercase,
* followed by a new line
* Return: Always 0
*/
int main(void)
{
int n;
char c;
for (n = 10; n < 20; n++)
{
putchar(n);
}
for (c = 'a'; c <= 'f'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}
