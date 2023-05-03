#include <stdio.h>
int main()
{
	char word[8];
	char word2[8];
	scanf_s("%10s", word);   // ×î¶à¶Á10¸ö
	scanf_s("%10s", word2);
	printf("%s##%s##\n", word, word2);

	return 0;
}