#include "main.h"
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;
	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if ( c == lowr || c == upper)
			{
				isletter = 1;
			}
		}
	}
	return (isletter)
}

