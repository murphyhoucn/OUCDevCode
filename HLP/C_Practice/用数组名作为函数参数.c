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
//������������������ʱ������β��и�Ԫ�ص�ֵ�����仯��ʵ������Ԫ����֮�����仯