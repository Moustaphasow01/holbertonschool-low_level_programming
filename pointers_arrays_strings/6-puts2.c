#include "main.h"

/**
* puts2 - prints one char out of 2 of a string
* followed by a new line
* @str: string to print the chars from
*/
void puts2(char *str)
{
int z, i;

z = 0;

while (str[z] != '\0')
{
z++;
}
for (i = 0; i < z; i += 2)
{
_putchar(str[i]);
}

_putchar('\n');
}
