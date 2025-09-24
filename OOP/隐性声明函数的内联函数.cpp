#include <iostream>
using namespace std;

class point 3
{
public:
	void init(int x, int y);
	int getX();
	int getY();
private:
	int X, Y;
};


inline void point::init(int x, int y)
{
	X = x;
	Y = y;
}

inline int point :: getX() { return X; }
inline int point::getY() { return Y; }