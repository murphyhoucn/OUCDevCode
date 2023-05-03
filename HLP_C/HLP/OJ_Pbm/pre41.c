#include <stdio.h>
// #include <cstdio>
int main() {
	int n;
	scanf("%d", &n);
	int sumn = 0, sumd = 1;
	while (n--) {
		int num, deno;
		char slash;
		scanf("%d %c %d", &num, &slash, &deno);
		sumn = sumn*deno + num*sumd;
		sumd = sumd*deno;
	}
	int a = sumd, b = sumn, c;
	while (a != 0) {
		c = a; a = b%a; b = c;
	}
	int gcd = b;
	sumd /= gcd;
	sumn /= gcd;
	if (sumd > 1)
		printf("%d/%d\n", sumn, sumd);
	else
		printf("%d\n", sumn);
	return 0;
}