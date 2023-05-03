#include <stdio.h>
#include <math.h>


int main(void)
{
	float height;
	float weight;

	
	printf("height:");

	//scanf_s("%f", &height);
	scanf("%f", &height);

	printf("weight:");
	//scanf_s("%f", &weight);
	scanf("%f", &weight);

	float bmi;

	bmi= weight / (float)pow((height / 100.0f),2.0);

	//printf("weight:%f\n", weight);
	//printf("fenmu:%f\n", (float)pow((height / 100.0f), 2.0));

	//bmi = 100.0f;
	printf("BMI=%.2f,", bmi);

	if (bmi<18.5)
	{
		printf("thin");
	}
	else if (18.5 <= bmi&&bmi<= 25.0)
	{
		printf("standard weight");
	}
	else
	{
		printf("over weight");
	}

	return 0;
}