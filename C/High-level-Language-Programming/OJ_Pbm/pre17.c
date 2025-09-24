# include <stdio.h>

int main()
{
    // 4名专家对4款赛车进行评论
    // 1）A说：2号赛车是最好的；
    // 2）B说：4号赛车是最好的；
    // 3）C说：3号赛车不是最好的；
    // 4）D说： B说错了。
    // 事实上只有1款赛车最佳，且只有1名专家说对了，其他3人都说错了。
    // 请编程输出最佳车的车号，以及说对的专家。

	int s[4]; //表示四句话的正误
	for (int best = 1; best < 5; best++)  // 遍历，考虑任一车是最好的情况
	{
		s[0] = (best == 2);
		s[1] = (best == 4);
		s[2]= (best != 3);
		s[3]= !(best == 4);

		if (s[1] + s[2] + s[3] + s[0] == 1) //且只有1名专家说对了，其他3人都说错了
			for (int i = 0; i < 4; i++)
				if (s[i]) 
                {
					char expert = 'A' + i;
					printf("%d\n", best);
                    printf("%c", expert);
				}
	}
	return 0;
}