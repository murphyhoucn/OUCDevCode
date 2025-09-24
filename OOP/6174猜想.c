#include <stdio.h>
int main()
{
	int k0 = 0;
	scanf_s("%d", &k0);
	int max, min;
	int cnt = 0;
	int num[4];

	while (k0 != 6174)
	{
		num[0] = k0 / 1000;
		num[1] = k0 / 100 % 10;
		num[2] = k0 / 10 % 10;
		num[3] = k0 % 10;

		int t = 0;
		int i, j = 0;

		for (i = 0; i < 3; i++) {
			for (j = 0; j < 3 - i; j++) {
				if (num[j] < num[j + 1]) {
					t = num[j];
					num[j] = num[j + 1];
					num[j + 1] = t;

				}

			}
		}

		max = 1000 * num[0] + 100 * num[1] + 10 * num[2] + 1 * num[3];
		min = 1000 * num[3] + 100 * num[2] + 10 * num[1] + 1 * num[0];
		k0=max - min;
		printf("%d-%d=%d\n", max, min, k0);
		cnt++;
	}

	printf("%d", cnt);

	return 0;
}