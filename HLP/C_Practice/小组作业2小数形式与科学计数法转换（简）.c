#include <stdio.h>
#include <string.h>

int main()
{
	char s[100000]; //�����С��
	int n[100000];  //��ѧ������С��

	//scanf_s("%s", s, 100000);
	//scanf("%s", s,100000);
	scanf("%s", s);
	//gets_s(s, 100000);

	//printf("%s", s);

	unsigned int s_point_flag = 0; //С����ı��
	unsigned int s_signal_flag = 0;//�����ŵı��
	unsigned int s_nonzero_flag = 0;//��һλ�������ֵı��

	unsigned int s_after_point_count = 0;
	unsigned int s_nonzero_count = 0;

	//��������,ɸѡ����
	unsigned int i;

	for (i = 0; i < strlen(s); i++)
	{
		//�����ı��
		if (s[0] == '-')
		{
			s_signal_flag = 1;
		}

		//С����λ�ñ��
		if (s[i] == '.')
		{ 
			s_point_flag = 1;
		}

		// �����С�����λ�ã���ʼ����С������λ��
		if (s_point_flag == 1)
		{
			s_after_point_count++;
			//printf("s_after_point_count=%d\n", s_after_point_count);
		}

		//��ǵ�һλ��Ϊ�������
		if (s[i] != '0'  && s[i] != '-' && s[i] != '.') 
		{
			s_nonzero_flag = 1;
		}

		//��һλ��Ϊ�������֮���λ��
		if (s_nonzero_flag == 1 && s[i] != '.')
		{
			//n[s_nonzero_count] = s[i] - '0';
			n[s_nonzero_count] = s[i] - 48;
			s_nonzero_count++;
		}
	}

	//��Ϊ�ڼ���С������λ��ʱ�����������С���㣬���Զ���һλ��
	s_after_point_count --;

	//�������
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

	int s_trans_index= s_nonzero_count - 1 - s_after_point_count;//����ָ��

	printf("e%d", s_trans_index);

	return 0;
}