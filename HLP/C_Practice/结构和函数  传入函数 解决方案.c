#include <stdio.h>
struct point {
	int x, y;
};

struct point getstruct(void);
void output(struct point);

int main()
{
	struct point a = { 0,0 };
	a = getstruct();
	output(a);
}

struct point getstruct(void)

{
	struct point p;
	scanf_s("%d", &p.x);
	scanf_s("%d", &p.y);
	printf("%d,%d\n", p.x, p.y);

	return p;
}

void output(struct point p)
{
	printf("%d,%d", p.x, p.y);
}

