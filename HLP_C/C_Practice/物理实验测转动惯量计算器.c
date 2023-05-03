#include <stdio.h>

int main(void)
{
	int kn;
	double tn;

	int km;
	double tm;

	void calculation(int kn, double tn, int km, double tm);

	scanf_s("%d %lf", &kn, &tn);
	scanf_s("%d %lf", &km, &tm);

	calculation(kn, tn, km, tm);
	return 0;
}
void calculation(int kn, double tn, int km, double tm)
{
	double result;
	double fenzi = 2 * 3.14*(kn*tm - km * tn);
	double fenmu = tn * tn*tm - tm * tm*tn;
	result = fenzi / fenmu;
	printf("%.4lf", result);
}
