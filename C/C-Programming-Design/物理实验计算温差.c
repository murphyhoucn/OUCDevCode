#include <stdio.h>

int main(void)
{
	
	float array[15] = { 0.146,0.175,0.199,0.222,0.246,0.266,0.288,0.308,0.330,0.349,0.373,0.393,0.413,0.433,0.451 };
	float array2[15] = { 0 };
	int i;
	for (i = 0; i < 14; i++)
	{
		//printf("V%d-V%d=%.3f\n", i + 2, i + 1, array[i + 1] - array[i]);
		array2[i] = array[i + 1] - array[i];
	}
	float sum = 0;
	for (i = 0; i < 15; i++)
	{
		sum += array2[i];
	}

	printf("%f", sum / 14);
	return 0;
}