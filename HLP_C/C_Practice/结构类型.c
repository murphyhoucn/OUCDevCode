#include <stdio.h>

int main()
{
	//��main�����ڲ������Ľṹ����ֻ����main�ڲ�ʹ�ã�
	//�����Ҫ���ⲿʹ�õĻ�����ðѸýṹ��������main����������
	struct date {      //�����ṹ����
		int month;
		int day;
		int year;
	};

	struct date today;    //today �Ǳ���������������struct date
	today.month = 07;
	today.day = 31;
	today.year = 2014;

	printf("today's date is %i-%i-%i.\n", today.year, today.month, today.day);


	return 0;
}