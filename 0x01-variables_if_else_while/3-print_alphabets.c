#include <stdio.h>
/**
 * main- prints the alphabet in lowercase, and then in uppercase.*
 * Return: 0
*/
int main()
{
int *al;
for (al = "a"; al <= "z"; al++)
putchar(al);
for (al = "A"; al <= "Z"; al++)
putchar(al);
putchar("\n");
return (0);
}
