#include <stdio.h>
#define N 100
int main() 
{
	char a[N];

	int i, in_word, word_num;

	//gets_s(a,N);
	gets(a);
	//puts(a);
	word_num = 0; // 初始化单词个数为0

	in_word = 0; // 标记位，标记是否在单词内


	for (i = 0; a[i]!='\0'; i++)
	{
		//if (a[i]<65||a[i]>90&&a[i]<97||a[i]>122) 
		if(a[i]==' ')
		{ // 不是字母
			in_word = 0; // 设置标记位为不在单词内
		}
		else if (in_word == 0) 
		{ // 在单词内
			word_num++; // 统计单词个数
			in_word = 1; // 设置标记位为在单词内
		}
	}
	printf("%d", word_num);

	return 0;
}
