#include <stdio.h>

void cheer(int i)
{
	printf("cheer   %d\n", i);
}

int main()
{
	double f = 3.6;
	cheer(2);
	cheer(2.6);  //2.6����doubule ���ͣ�����һ����doubel��int ��ת��
	cheer(f);
	//���ú���ʱ����ֵ����������Ͳ�ƥ���C���Դ�ͳ������©��
	return 0;
}