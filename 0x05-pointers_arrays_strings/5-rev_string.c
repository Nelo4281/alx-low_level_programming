#include "main.h"
/**
 * puts2 - print strings
 * @s: function parameter
 * Return: 0
 */

void rev_string(char *s)
{
int i;

for (i = 0 ; s[i] != '\0' ; i++)
{
_putchar(s[i]);
i++;
}
_putchar('\n');
}
