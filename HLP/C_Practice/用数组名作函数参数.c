#include <stdio.h>

int main()
{
	int array[3];

	int i;
	for (i = 0; i < 3; i++)
	{
		scanf_s("%d", &array[i]);
	}

	void fun(int arr[]);
	//void fun(int *arr);

	fun(array[3]);
}

void fun(int *arr)
//void fun(int arr[])
{
	printf("%d", sizeof(arr));
}