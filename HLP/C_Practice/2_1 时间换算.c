#include <stdio.h>

int main(void)
{
	struct time
	{
		int hour;
		int minute;
		int second;
	}t;

	printf("Input time:");

	//scanf_s("%d:%d:%d", &t.hour, &t.minute, &t.second);
	scanf("%d:%d:%d", &t.hour, &t.minute, &t.second);
	int add_time;

	printf("Input duration:");
	//scanf_s("%d", &add_time);
	scanf("%d", &add_time);

	printf("New time:");

	t.second = t.second + add_time;

	if (t.second >= 60) 
	{ 
		t.second -= 60;
		t.minute += 1;
		if (t.minute >= 60)
		{
			t.minute -=60;
			t.hour += 1;
			if (t.hour >= 24)
			{
				t.hour -= 24;
			}

		}
	}

	printf("%d:%d:%d", t.hour, t.minute, t.second);

	return 0;

}