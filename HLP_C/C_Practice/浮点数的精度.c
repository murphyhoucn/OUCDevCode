#include <stdio.h>
int main()
{
	float a, b, c;

	a = 1.345f;  //f����F��ʾһ��float���͵����֣�������ĸ��ʾΪĬ�ϵ�double ���͵ĸ�����
	b = 1.123f;
	c = a + b;
	if (c == 2.468) {
		printf("���\n");
	}
	else {
		printf("����ȣ� \n");
		printf("c=%.10f\n", c);  
		printf("c=%f\n", c);    //����������ֲ�׼ȷ ��������������
	}

	return 0;
}