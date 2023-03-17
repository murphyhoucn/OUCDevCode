#include <iostream>
using namespace std;

class clock
{
public:
	clock(int hour = 0, int minute = 0, int second = 0);
	void showtime() const;
	clock& operator ++();
	clock operator ++(int);

private:
	int hour, minute, second;
};

clock::clock(int hour, int minute, int second)
{
	if (0 <= hour && hour < 24 && 0 <= minute && minute < 60 && 0 <= second && second < 60)
	{
		this->hour = hour;
		this->minute = minute;
		this->second = second;
	}
	else
	{
		cout << "time error" << endl;
	}
}

void clock::showtime() const
{
	cout << hour << ":" << minute << ":" << second << endl;
}

clock& clock::operator++()
{
	second++;
	if (second >= 60)
	{
		second -= 60;
		minute++;
		if (minute >= 60)
		{
			minute -= 60;
			hour = (hour + 1) % 24;
		}
	}

	return *this;
}

clock clock::operator++(int)
{
	clock old= *this;
	++(*this);
	return old;
}

int main()
{
	clock myclock(23, 59, 59);
	cout << "first time output:";
	myclock.showtime();

	cout << "show myclcok++:";
	(myclock++).showtime();

	cout << "show ++mytime:";
	(++myclock).showtime();

	return 0;
}