#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - This is the betty main section
 *
 * Return: 0
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
printf("Last digit of ");
printf("%d", n);
printf(" is %d", n % 10);
if ((n % 10) > 5)
{
printf(" and is greater than 5 ");
}
else if ((n % 10) == 0)
{
printf(" and is 0 ");
}
else if ((n % 10) < 6 && (n % 10) != 0)
{
printf(" and is less than 6 and not 0\n");
}
return (0);
}
