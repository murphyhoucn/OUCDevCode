#include <iostream>
using namespace std;

class Clock
{
public:
	Clock();
	void setTime(int newH, int newM, int newS);
	void showTime();
private:
	int hour, minute, second;
};

Clock::Clock():hour(0),minute(0),second(0){} //¹¹Ôìº¯Êý

void Clock:: setTime(int newH, int newM, int newS)
{
	hour = newH;
	minute = newM;
	second = newS;
}
void Clock:: showTime()
{
	cout << hour << ":" << minute << ":" << second << endl;
}


Clock globalClock;

int main()
{
	cout << "First time output:" << endl;
	globalClock.showTime();
	globalClock.setTime(8, 30, 30);
	Clock myClock(globalClock);
	cout << "Second time output:" << endl;
	globalClock.showTime();

	return 0;
}
