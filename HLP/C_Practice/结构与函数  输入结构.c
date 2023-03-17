#include <stdio.h>

struct point {
	int x;
	int y;

};

void getstruct(struct point);
void output(struct point);

void main()
{
	struct point a = { 0,0 };
	getstruct(a);
	output(a);

}

void getstruct(struct point p) {
	scanf_s("%d", &p.x);
	scanf_s("%d", &p.y);
	printf("%d,%d\n", p.x, p.y);
}

void output(struct point p) {
	printf("%d,%d\n", p.x, p.y);
}