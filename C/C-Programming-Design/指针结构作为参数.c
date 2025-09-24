#include <stdio.h>

struct point {
	int x;
	int y;
};

struct point* getstruct(struct point*);
void output(struct point);
void print(const struct point*p);

int main()
{
	struct point a = { 0,0 };
	getstruct(&a);
	output(a);
	output(*getstruct(&a));
	print(getstruct(&a));
}

struct point* getstruct(struct point *p)
{
	scanf_s("%d", &p->x);
	scanf_s("%d", &p->y);
	printf("%d,%d\n", p->x, p->y);
	return p;
}

void output(struct point p)
{
	printf("%d,%d\n", p.x, p.y);
}

void print(const struct point *p)
{
	printf("%d,%d\n", p->x, p->y);
}