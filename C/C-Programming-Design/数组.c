#include <stdio.h>

int main(void)
{
	void fun(int *p);
	int array[5] = { 1,2,3,4,5 };

	fun(array);

	return 0;
	
}
void fun(int *p)
{
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("test1:%d\n", p[i]);
		printf("test2:%d\n", *p+i);
	}

}