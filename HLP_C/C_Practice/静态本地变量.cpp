#include <stdio.h>

int f(void);

int main(int argc, char const *arv[])
{
	f();
	f();
	f();
	return 0;

}

int f(void)
{
	//int all = 1;
	static int all = 1;//��̬���ر��� ������all ����һ�Σ��ٴν��뺯����ʱ�򣬳�ʼֵ���ϴν��뺯���������ֵ��
	printf("in %s all=%d\n", __func__, all);
	all += 2;
	printf("agn in %s all=%d\n", __func__, all);
	printf("\n");
	return 0;
}