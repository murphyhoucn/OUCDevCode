#include <stdio.h>
int main()
{
	int type;
	printf("������һ��������");
	scanf("%d", &type);

	if (type == 1) {
		printf("���");
	}
	else if (type == 2) {
		printf("���Ϻ�");
	}
	else if (type == 3) {
		printf("���Ϻ�");
	}
	else if (type == 4) {
		printf("�ټ�");
	}
	else {
		printf("����ʲô����");
	}
	return 0;

}