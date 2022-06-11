/**
 * _isalpha - checks whether is lowercase or uppercase alphabets
 * @c: value to be taken by the function
 *
 * Return: isletter
 */
int _isalpha(int c)

{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
			{
				isletter = 1;
			}
		}
	}
	return (isletter);
}

