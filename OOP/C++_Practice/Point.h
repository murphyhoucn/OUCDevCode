#ifndef _POINT_H
#define _POINT_H

class Point
{
public:
	Point();
	Point(int x, int y);

	~Point();

	void move(int newX, int newY);
	int getX() const { return x; }
	int getY() const { return y; }

	//static void showCount();


private:
	int x;
	int y;

};


#endif