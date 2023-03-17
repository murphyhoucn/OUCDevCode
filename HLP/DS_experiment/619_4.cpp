#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	int key;
}HTable, * Htype;

int Hash(int key, int mod)
{
	return key % 13;
}

void Createhash(Htype& HashTable, Htype ST, int n, int m)
{
	int i, j;
	HashTable = (Htype)malloc(m * sizeof(HTable));
	for (i = 0; i < m; i++)
		HashTable[i].key = NULL;
	for (i = 0; i < n; i++)
	{
		j = Hash(ST[i].key, m);
		while (HashTable[j].key != NULL)
			j = (j + 1) % m;
		HashTable[j].key = ST[i].key;
	}
}

int Search(Htype HashTable, int key, int m, int& times)
{
	int i;
	times = 1;
	i = Hash(key, m);
	while (HashTable[i].key != 0 && HashTable[i].key != key)
	{
		i++;
		++times;
	}
	if (HashTable[i].key == 0) return -1;
	else return i;
}

void main()
{
	Htype ST;
	Htype HASH;
	int key;
	int i, n, m, times;
	char ch;

	printf("Please input length of data:\n");
	scanf_s("%d", &n);
	printf("Please input length of hash table:\n");
	scanf_s("%d", &m);

	ST = (Htype)malloc(n * sizeof(HTable));
	printf("Please input %d data:\n", n);
	for (i = 0; i < n; i++)
		scanf_s("%d", &ST[i].key);
	Createhash(HASH, ST, n, m);

	printf("The hash table is\n");
	for (i = 0; i < m; i++) printf("%5d", i);
	printf("\n");
	for (i = 0; i < m; i++) printf("%5d", HASH[i].key);
	printf("\n");

	do {
		printf("Input the key you want to search : \n");
		scanf_s("%d", &key);
		i = Search(HASH, key, m, times);

		if (i != 1)
		{
			printf("the position is %d\n", i);
			printf("Search times is %d\n", times);
		}
		else
		{
			printf("not found!\n");
			printf("Search times is %d\n", times);
		}
		printf("Continue(y/n):\n");
	} while ((ch = getchar()) == 'y' || (ch = getchar()) == 'Y');
}
