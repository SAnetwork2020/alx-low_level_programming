/**
* _puts - prints a string followed by a new line to stdout
* @str: value of the string to be printed out to stdout
*
* Return: nothing
*/
void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
