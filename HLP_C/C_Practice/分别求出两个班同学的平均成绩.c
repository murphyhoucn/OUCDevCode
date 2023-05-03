#include <stdio.h>

int main()
{
	float score1[3] = { 1,2,3 };
	float score2[4] = { 1,2,3,4 };

	float average(float score[], int n);

	printf("the aveage of class A is %f \n", average(score1, 3));
	printf("the aveage of class B is %f \n", average(score2, 4));

	return 0;

}

float average(float score[], int n)
{
	float sum = 0.0;

	for (int i = 0; i < n; i++)
	{
		sum += score[i];
	}


	return (sum / n);
}