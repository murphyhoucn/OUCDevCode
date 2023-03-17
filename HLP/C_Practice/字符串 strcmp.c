#include <stdio.h>
#include <string.h>


int main()
{
	char s1[] = "abc";
	char s2[] = "abc";
	char s3[] = "ab";
	char s4[] = "abcd";
	char s5[] = "bbc"; 
	char s6[] = "Abc";
	char s7[] = "abc ";


	printf("%d\n", strcmp(s1, s2));  //s1等于s2—— 0
	printf("%d\n", strcmp(s1, s3));  // s1大于s3—— 1
	printf("%d\n", strcmp(s1, s4));  // s1小于s4—— -1
	printf("%d\n", strcmp(s1, s5));  // s1小于s5—— -1
	printf("%d\n", strcmp(s1, s6));  
	printf("%d\n", strcmp(s1, s7));

	return 0;

}