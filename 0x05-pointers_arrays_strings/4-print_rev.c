#include "main.h"
/**
* print_rev - prints a string in reverse
* @s: string
*/
void print_rev(char *s)
{
int longi = 0;
int o;
while (s[longi] != '\0')
{
longi++;
}
for (o = longi - 1; o >= 0; o--)
{
_putchar(s[o]);
}
_putchar('\n');
}
