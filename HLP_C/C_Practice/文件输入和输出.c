#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	errno_t err;                                    //��ͬ��1
	char ch, filename[10];
	printf("���������õ��ļ�����");
	scanf_s("%s", filename, 10);
	if ((err = fopen_s(&fp, filename, "w")) != 0)    //��ͬ��2
	{
		printf("�޷��򿪴��ļ�\n");            //����򲻿���������򲻿�
		exit(0);                               //��ֹ����
	}
	ch = getchar();                            //���������������Ļس���
	printf("������һ��׼���洢�����̵��ַ�������#��������");
	ch = getchar();                            //�������մӼ�������ĵ�һ���ַ�
	while (ch != '#')                          //�����롰#��ʱ����ѭ��
	{
		fputc(ch, fp);                         //��������һ���ַ�
		putchar(ch);                           //��������ַ���ʾ����Ļ��
		ch = getchar();                        //�ٽ��մӼ��������һ���ַ�
	}
	fclose(fp);                                //�ر��ļ�
	putchar(10);                               //����Ļ���һ�����з�
	return 0;
}