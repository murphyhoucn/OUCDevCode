#include <stdio.h>
#include <string.h>

int main(void)
{
	char name[100];
	scanf_s("%s", name, 100);
	int signal = 0;
	//printf("%s\n", name);

	void print1(void);
	void print2(void);
	void print3(void);

	if (strcmp(name,"C")==0)
	{
		signal = 1;
	}
	else if (strcmp(name, "C++") == 0)
	{
		signal = 1;
	}
	else if (strcmp(name, "Python") == 0)
	{
		signal = 2;
	}
	else if (strcmp(name, "Java") == 0)
	{
		signal = 3;
	}
	
	switch (signal)
	{
	case 1:print1(); break;
	case 2:print2(); break;
	case 3:print3(); break;
	default:
		printf("this programme language is not popular now\nchange a better so that you can have a better job"); 
		break;
	}
	return 0;
}

void print1(void)

{
	float a, x, y;
	for (y = 1.5f; y > -1.5f; y -= 0.1f)
	{
		for (x = -1.5f; x < 1.5f; x += 0.05f)
		{
			a = x * x + y * y - 1;
			//�����@���ż�Ϊ��ӡ��������ͼ�����ţ��ɸ���
			char ch = a * a*a - x * x*y*y*y <= 0.0f ? '*' : ' ';
			putchar(ch);
			//����putchar(a*a*a-x*x*y*y*y<=0.0f?'*':' ');
		}
		printf("\n");
	}
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("                       ѧ��C\\C++,ǰ;����           \n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
}

void print2(void)

{
	float a, x, y;
	for (y = 1.5f; y > -1.5f; y -= 0.1f)
	{
		for (x = -1.5f; x < 1.5f; x += 0.05f)
		{
			a = x * x + y * y - 1;
			//�����@���ż�Ϊ��ӡ��������ͼ�����ţ��ɸ���
			char ch = a * a*a - x * x*y*y*y <= 0.0f ? '*' : ' ';
			putchar(ch);
			//����putchar(a*a*a-x*x*y*y*y<=0.0f?'*':' ');
		}
		printf("\n");
	}
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("                       Python�ܺã����ǲ�Ҫ��������Ի�Ŷ           \n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
}

void print3(void)

{
	float a, x, y;
	for (y = 1.5f; y > -1.5f; y -= 0.1f)
	{
		for (x = -1.5f; x < 1.5f; x += 0.05f)
		{
			a = x * x + y * y - 1;
			//�����@���ż�Ϊ��ӡ��������ͼ�����ţ��ɸ���
			char ch = a * a*a - x * x*y*y*y <= 0.0f ? '*' : ' ';
			putchar(ch);
			//����putchar(a*a*a-x*x*y*y*y<=0.0f?'*':' ');
		}
		printf("\n");
	}

	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
	printf("                       Java�е���ѣ�����!������ѡ��        \n");
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n");
}