extern A;
int power(int n)
{
	int i = 1;
	int y = 1;

	for (i = 1; i <= n; i++)
	{
		y *= A;
	}

	return (y);
}