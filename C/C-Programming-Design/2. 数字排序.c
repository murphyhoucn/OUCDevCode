#include <stdio.h>

int main(void)
{
	void exchange(float *q1, float *q2, float *q3);

	float a, b, c;
	float *p1 = NULL;
	float *p2 = NULL;
	float *p3 = NULL;

	//scanf_s("%f %f %f", &a, &b, &c);
	scanf("%f %f %f", &a, &b, &c);
	p1 = &a;
	p2 = &b;
	p3 = &c;

	exchange(p1, p2, p3);

	//printf("result: %f %f %f\n", a, b, c);
	printf("%g %g %g\n", a, b, c);
	//printf("%f %f %f\n", a, b, c);

	return 0;

}

void exchange(float *q1, float *q2, float *q3)
{
	void swap(float *pt1, float *pt2);

	float *x = &(*q1);
	float *y = &(*q2);
	float *z = &(*q3);

	//printf("start:  %f %f %f\n", *q1, *q2, *q3);

	if (*q1 > *q2)
	{ 
		swap(x, y); 
		//printf("test:yes\n");
	}
	if (*q1 > *q3)
	{
		swap(x, z); 
	}
	if (*q2 > *q3) 
	{
		swap(y, z); 
	}

	//printf("end:    %f %f %f\n", *q1, *q2, *q3);


}

void swap(float *pt1, float *pt2)
{
	float t;
	t = *pt1;
	*pt1 = *pt2;
	*pt2 = t;
}