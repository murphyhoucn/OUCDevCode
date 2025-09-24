#include <stdio.h>
#include <math.h>

int main()

{
	int n, k, i;
	printf("enter:");
	scanf_s("%d", &n);

	k = sqrt(n);

	for (i = 2; i <= k; i++)
	{
		if (n%i == 0)
		{
			break;
		}
	}

	if (i < k) { printf("%d bushi\n", n); }
	else { printf("%d shide \n", n); }

	return 0;
}