//设串 T 采用堆式存储，设计一个算法，用统计串的形式给出串 T 中字符连续
//出现的次数，例如‘aaabbaddddffc’的统计串为‘a3_b2_a1_d4_f2_c1’

#include<stdio.h>
#include<stdlib.h>

typedef struct   //串的堆分配存储表示
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
	printf("请输入要计算的字符串:");
	gets_s(array);
	//printf("array_test:%s\n", array);

	InitString(T);
	//StrAssign(T, *array);
	//------------------------------------------------ 
	/*
	以下操作的实现本应该用函数StrAssign来完成，但是编译器报错，
	链接器工具错误 LNK1120，链接器工具错误 LNK2019
	如下，不使用函数时却能正常运行,不知道怎么搞？？
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
	//printf("堆分配的串的内容：");
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

void StrWrite(HString& S, char c)  //写_连接符号
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
		//BUG，如果计数器设置为int型的话，就不能直接print,而是要分为多个print,分别打印数字和字符
		//使用char类型的计数器，计数范围1-9
	    while (T.ch[i] == T.ch[j]) //计算连着的字符有几个
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

