#include <stdio.h>
#include <string.h>

int main()
{
	char s[100000]; //输入的小数
	int n[100000];  //科学计数法小数

	//scanf_s("%s", s, 100000);
	//scanf("%s", s,100000);
	scanf("%s", s);
	//gets_s(s, 100000);

	//printf("%s", s);

	unsigned int s_point_flag = 0; //小数点的标记
	unsigned int s_signal_flag = 0;//正负号的标记
	unsigned int s_nonzero_flag = 0;//第一位非零数字的标记

	unsigned int s_after_point_count = 0;
	unsigned int s_nonzero_count = 0;

	//遍历数组,筛选数组
	unsigned int i;

	for (i = 0; i < strlen(s); i++)
	{
		//负数的标记
		if (s[0] == '-')
		{
			s_signal_flag = 1;
		}

		//小数点位置标记
		if (s[i] == '.')
		{ 
			s_point_flag = 1;
		}

		// 标记了小数点的位置，开始计算小数点后的位数
		if (s_point_flag == 1)
		{
			s_after_point_count++;
			//printf("s_after_point_count=%d\n", s_after_point_count);
		}

		//标记第一位不为零的数字
		if (s[i] != '0'  && s[i] != '-' && s[i] != '.') 
		{
			s_nonzero_flag = 1;
		}

		//第一位不为零的数字之后的位数
		if (s_nonzero_flag == 1 && s[i] != '.')
		{
			//n[s_nonzero_count] = s[i] - '0';
			n[s_nonzero_count] = s[i] - 48;
			s_nonzero_count++;
		}
	}

	//因为在计算小数点后的位数时，计算带上了小数点，所以多了一位：
	s_after_point_count --;

	//输出负号
	if (s_signal_flag == 1)
	{ 
		printf("-");
	}

	for (i = 0; i < s_nonzero_count; i++)
	{
		if (i == 1)
		{ 
			printf(".%d", n[i]); 
		}
		else
		{
			printf("%d", n[i]);
		}
	}

	int s_trans_index= s_nonzero_count - 1 - s_after_point_count;//计算指数

	printf("e%d", s_trans_index);

	return 0;
}