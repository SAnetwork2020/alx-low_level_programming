int _putchar(char ch)
{
return (write(1, &ch, 1));
}
void print_alphabet(void)
{
for (char c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar("\n");
return (0);
}
