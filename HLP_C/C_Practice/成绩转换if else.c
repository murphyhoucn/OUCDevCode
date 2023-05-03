#include <stdio.h>
int main()
{
	int s;
	scanf("%d", &s);

	if (s >=90) {
		printf("A");
	}
	else if (s>=80) {
		printf("B");
	}
	else if (s>=70) {
		printf("C");
	}
	else if (s>=60) {
		printf("C");
	}
	else {
		printf("E");
	}
	return 0;

}