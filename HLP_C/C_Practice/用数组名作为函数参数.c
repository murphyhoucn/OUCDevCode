#include <stdio.h>

int main(void)
{
	//void fun(int arr[]);
	void fun(int* arr);

	int array[2] = { 1,0 };



	fun(array);


	printf("%d %d", array[0], array[1]);
	return 0;
}

void fun(int arr[])

//void fun(int* arr)

{
	arr[1] = 10;
}
//当数组名做函数参数时，如果形参中个元素的值发生变化，实参数组元素随之发生变化