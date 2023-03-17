#include <stdio.h>
int main()
{
	int s;
	scanf("%d", &s);
	
	s = s / 10;

	switch (s) {

		//方法一
	//case 10:
	//	printf("A");
	//	break;

		//方法二
	case 10:
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
		break;
	case 6:
		printf("D");
		break;
	default:
		printf("E");
		break;
	}
	return 0;

}