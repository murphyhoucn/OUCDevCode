#include <stdio.h>

int f(void);

int gall = 12;

//int gall;  //������ʼ��ʱ��ȫ�ֱ�����ֵ��0
//int gall = f();   //ֻ���ñ���ʱ����֪��ֵ����ʼ��ȫ�ֱ���

//int gall2 = gall;   //���ֳ�ʼ���������ԣ�����gall��const���͵ģ������Ƽ�������д������Ϊȫ�ֱ����ĳ�ʼ��˳����ܸܺ��ӣ���

int main(int argc, char const *argv[])       //__func__ ��ʾ����������  ��"�ַ���"���͡���>%s
{
	printf("��in %s gall=%d\n", __func__, gall);         //12  ��
	f();
	printf("��agn in %s gall=%d\n", __func__, gall);     //14   ��

	return 0;
}

int f(void)
{

	//int gall = 1;   //�����ڲ��ı��ر�����ȫ�ֱ�������ʱ��ȫ�ֱ���������
	printf("��in %s gall=%d\n", __func__, gall);      //12   ��
	gall += 2;
	printf("��agn in %s gall=%d\n", __func__, gall);    //14   ��
	return 0;
}