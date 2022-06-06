#include <stdio.h>
/**
 * main - prints size of various types of any computer
 *
 * Return: 0
 */
int main(void)
{
printf("%lu\n", sizeof(char));
printf("%lu\n", sizeof(int));
printf("%lu", sizeof(float));
printf("%lu", sizeof(long int));
printf("%lu", sizeof(long long int));
return (0);
}
