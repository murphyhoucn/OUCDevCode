//�贮 T ���ö�ʽ�洢�����һ���㷨����ͳ�ƴ�����ʽ������ T ���ַ�����
//���ֵĴ��������确aaabbaddddffc����ͳ�ƴ�Ϊ��a3_b2_a1_d4_f2_c1��

#include<stdio.h>
#include<stdlib.h>

typedef struct   //���Ķѷ���洢��ʾ
{
	char* ch;
	int length;
}HString;

int main(void)
{
	HString T;
	HString T_Cal;

	void StrAssign(HString & T, char array);
	void InitString(HString & T);
	void PrintString(HString & T);
	HString CalString(HString & T);
	void StrWrite(HString & S, char c);

	char array[100];
	printf("������Ҫ������ַ���:");
	gets_s(array);
	//printf("array_test:%s\n", array);

	InitString(T);
	//StrAssign(T, *array);
	//------------------------------------------------ 
	/*
	���²�����ʵ�ֱ�Ӧ���ú���StrAssign����ɣ����Ǳ���������
	���������ߴ��� LNK1120�����������ߴ��� LNK2019
	���£���ʹ�ú���ʱȴ����������,��֪����ô�㣿��
	*/
	int i1 = 0;
	int chars_length;
	for (i1; array[i1]; i1++);

	chars_length = i1;

	if (T.ch) { free(T.ch); }

	T.ch = (char*)malloc(chars_length * sizeof(char));

	if (!T.ch) { exit(-1); }

	int i;
	for (i = 0; i < chars_length; i++)
	{
		T.ch[i] = array[i];
	}
	T.length = chars_length;
	//--------------------------------------------------------------------
	//printf("�ѷ���Ĵ������ݣ�");
	//PrintString(T);
	T_Cal =CalString(T);
	PrintString(T_Cal);

	return 0;
}

void InitString(HString& T)
{
	T.ch = NULL;
	T.length = 0;
}

//void StrAssign(HString& T, char* chars) 
//{
//	int count = 0;
//	int chars_length;
//	for (count; chars[count]; count++);
//
//	chars_length = count;
//
//
//	if (T.ch) { free(T.ch); }
//
//	T.ch = (char*)malloc(chars_length * sizeof(char));
//
//	if (!T.ch){exit(-1);}
//
//	int i;
//	for (i = 0; i < chars_length; i++)
//	{
//		T.ch[i] = chars[i];
//	}
//	T.length = chars_length;
//}


void PrintString(HString& T)
{
	int i;
	for (i = 0; i < T.length; i++)
	{
		putchar(T.ch[i]);
	}
	printf("\n");
}

void StrWrite(HString& S, char c)  //д_���ӷ���
{
	S.ch = (char*)realloc(S.ch, (S.length + 1) * sizeof(char));
	if (!S.ch) 
	{
		exit(-1);
	}
	S.ch[S.length] = c;
	S.length++;
}

HString CalString(HString& T)
{
	HString S;
	InitString(S);
	int i, j;
	char signal = '_';
	for (i = 0; i < T.length; i = j) 
	{
	    StrWrite(S, T.ch[i]);
	    j = i + 1;
	    char count = '1';  
		//BUG���������������Ϊint�͵Ļ����Ͳ���ֱ��print,����Ҫ��Ϊ���print,�ֱ��ӡ���ֺ��ַ�
		//ʹ��char���͵ļ�������������Χ1-9
	    while (T.ch[i] == T.ch[j]) //�������ŵ��ַ��м���
		{
			count += 1;
	        j++;
	    }

	    if (count > 0) 
		{
	        StrWrite(S, count);
	    }


	    StrWrite(S, signal);
	
	}
	return S;
}

