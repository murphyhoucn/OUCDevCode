// https://blog.csdn.net/stillczw/article/details/101398627

# include<stdio.h>
# include<string.h>

int main(){
	char str[100000], substr[100000];	//声明字符数组 
	int length, max;
	length = max = 0;
	
	scanf("%s %s", str, substr);		//scanf()函数输入字符串，以空格间隔，回车结束 
	// printf("111cesshi:%s\n", str);
    // printf("222cesshi:%s\n", substr);

	length = strlen(str);				//用string库中的strlen()函数获取str字符串长度
                                        //不包括'\0' 
	for(int i=0; i<length; i++){
		if(str[i]>str[max])				//比较str字符串中各字符大小 
			max = i;					//记录最大字符的下标 
	}
	for(int i=0; i<=max; i++) 
		printf("%c", str[i]);			//printf()输出str中最大字符及之前的字符串
	printf("%s", substr);				//其后输出要插入的substr字符串 
	for(int i=max+1; i<length; i++)
		printf("%c", str[i]);			//在substr字符串后继续输入str的后半部分 

	printf("\n");	
	return 0;	
}
