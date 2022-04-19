#include "main.h"

/**
 * _strlen -length of string 
 * *s pointer  - prints a string, followed by a newline to stdout
 * 
 * @str: string parameter to print
 *
 * Return: Nothing
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
