#include <stdio.h>
#define N 100
int main() 
{
	char a[N];

	int i, in_word, word_num;

	//gets_s(a,N);
	gets(a);
	//puts(a);
	word_num = 0; // ��ʼ�����ʸ���Ϊ0

	in_word = 0; // ���λ������Ƿ��ڵ�����


	for (i = 0; a[i]!='\0'; i++)
	{
		//if (a[i]<65||a[i]>90&&a[i]<97||a[i]>122) 
		if(a[i]==' ')
		{ // ������ĸ
			in_word = 0; // ���ñ��λΪ���ڵ�����
		}
		else if (in_word == 0) 
		{ // �ڵ�����
			word_num++; // ͳ�Ƶ��ʸ���
			in_word = 1; // ���ñ��λΪ�ڵ�����
		}
	}
	printf("%d", word_num);

	return 0;
}
