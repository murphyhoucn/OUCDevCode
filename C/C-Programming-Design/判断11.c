#include <stdio.h>

int main(void)
{
	int x = 10;
	int y = 20;
	int z = 30;
	//1
	if (x > y)z = x; x = y; y = z;
	//2
	if (x > y)
	{
		z = x;
	}
	x = y;
	y = z;
	//3
	if (z > y) { z = x; x = y; y = z; }

	printf("x=%d\ty=%d\tz=%d\n", x, y, z);

	return 0;
}