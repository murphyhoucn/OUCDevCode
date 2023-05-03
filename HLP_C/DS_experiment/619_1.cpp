//#include<stdio.h>
//#include<stdlib.h>
//
//typedef struct
//{
//	char key;
//	int data;
//}SequenList;
//
//int SequenSearch(SequenList L[], int n, char key)
//{
//	int i = 1;
//	int position;
//	int counter = 1;
//	while (i <= n)
//	{
//		if (L[i - 1].key == key)
//		{
//			position = i;
//			break;
//		}
//		else position = -1;
//
//		i++;
//		counter++;
//	}
//	printf("Search times=%d\n", counter);
//	return position;
//}
//void main()
//{
//	SequenList s[4];
//	char temp;
//	s[0].key = 'b'; s[0].data = 111;
//	s[1].key = 'c'; s[1].data = 222;
//	s[2].key = 'a'; s[2].data = 333;
//	s[3].key = 'd'; s[3].data = 444;
//	printf("please input the key value('a','b','c','d'):\n");
//	scanf_s("%c", &temp);
//	int pos = SequenSearch(s, 4, temp);
//	if (pos != -1)
//		printf("the position is %d,it's value is %d\n", pos, s[pos - 1].data);
//	else printf("cannot found!\n");
//}