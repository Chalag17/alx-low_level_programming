#include "main.h"

/**
 *@_strlen -length of string 
 *@s:A pointer prints a string, followed by a newline to stdout
 * Return:void
 */

int _strlen(char *s)
{
int u;

u = 0;
while (s[u] != '\0')
{
u++;
}
return (u);
}