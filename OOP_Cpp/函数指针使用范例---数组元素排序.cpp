#include <iostream>
using namespace std;

int compare(const void* elem1, const void* elem2)
{
	unsigned int* p1, * p2;
	p1 = (unsigned int*)elem1;
	p2 = (unsigned int*)elem2;

	return (*p1 % 10) - (*p2 % 10);
}

const int NUM = 5;
//#define NUM 5;

int main()
{
	unsigned int an[NUM] = { 8,123,11,10,4 };
	qsort(an, NUM,sizeof(unsigned int), compare);

	for (int i = 1; i < NUM; i++)
	{
		cout << an[i] << endl;
	}

	return 0;
}