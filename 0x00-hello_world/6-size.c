#include <stdio.h>
/**
 * main - prints size of various types of any computer
 *
 * Return: 0
 */
int main(void)
{
printf("Size of a char: %lu byte(s)\n", sizeof(char));
printf("%lusize of a int\n", sizeof(int));
printf("%lusize of a long int\n", sizeof(long int));
printf("%lusize of a long long int\n", sizeof(long long int));
printf("%lusize of a float\n", sizeof(float));
return (0);
}
