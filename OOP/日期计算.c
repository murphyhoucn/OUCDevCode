#include<stdio.h>
int main()
{
	int a;
	char b;
	int m, d;
	scanf("%d %c %d %d", &a, &b, &m, &d);
	int i;
	if (b == 'p') {
		if (m == 1) {
			i = (d - 1) % 7 + a;
			if (i >= 7)
				i = i - 7;
			else if (i < 7)
				i = i;
		}
		if (m == 2) {
			i = (d + 30) % 7 + a;
			if (i >= 7)
				i = i - 7;
			else if (i < 7)
				i = i;
		}
		if (m == 3) {
			i = (d + 58) % 7 + a;
			if (i >= 7)
				i = i - 7;
			else if (i < 7)
				i = i;
		}
		if (m == 4) {
			i = (d + 89) % 7 + a;
			if (i >= 7)
				i = i - 7;
			else if (i < 7)
				i = i;
		}
		if (m == 5) {
			i = (d + 119) % 7 + a;
			if (i >= 7)
				i = i - 7;
			else if (i < 7)
				i = i;
		}

		if (m == 6) {
			i = (d + 150) % 7 + a;
			if (i >= 7)
				i = i - 7;
			else if (i < 7)
				i = i;
		}

		if (m == 7) {
			i = (d + 180) % 7 + a;
			if (i >= 7)
				i = i - 7;
			else if (i < 7)
				i = i;
		}

		if (m == 8) {
			i = (d + 211) % 7 + a;
			if (i >= 7)
				i = i - 7;
			else if (i < 7)
				i = i;
		}
		if (m == 9) {
			i = (d + 242) % 7 + a;
			if (i >= 7)
				i = i - 7;
			else if (i < 7)
				i = i;
		}
		if (m == 10) {
			i = (d + 272) % 7 + a;
			if (i >= 7)
				i = i - 7;
			else if (i < 7)
				i = i;
		}
		if (m == 11) {
			i = (d + 303) % 7 + a;
			if (i >= 7)
				i = i - 7;
			else if (i < 7)
				i = i;
		}
		if (m == 12) {
			i = (d + 333) % 7 + a;
			if (i >= 7)
				i = i - 7;
			else if (i < 7)
				i = i;
		}
	}
	else if (b == 'r') {
		if (m == 1) {
			i = (d - 1) % 7 + a;
			if (i >= 7)
				i = i - 7;
			else if (i < 7)
				i = i;
		}
		if (m == 2) {
			i = (d + 30) % 7 + a;
			if (i >= 7)
				i = i - 7;
			else if (i < 7)
				i = i;
		}
		if (m == 3) {
			i = (d + 59) % 7 + a;
			if (i >= 7)
				i = i - 7;
			else if (i < 7)
				i = i;
		}
		if (m == 4) {
			i = (d + 90) % 7 + a;
			if (i >= 7)
				i = i - 7;
			else if (i < 7)
				i = i;
		}
		if (m == 5) {
			i = (d + 120) % 7 + a;
			if (i >= 7)
				i = i - 7;
			else if (i < 7)
				i = i;
		}

		if (m == 6) {
			i = (d + 151) % 7 + a;
			if (i >= 7)
				i = i - 7;
			else if (i < 7)
				i = i;
		}

		if (m == 7) {
			i = (d + 181) % 7 + a;
			if (i >= 7)
				i = i - 7;
			else if (i < 7)
				i = i;
		}

		if (m == 8) {
			i = (d + 212) % 7 + a;
			if (i >= 7)
				i = i - 7;
			else if (i < 7)
				i = i;
		}
		if (m == 9) {
			i = (d + 243) % 7 + a;
			if (i >= 7)
				i = i - 7;
			else if (i < 7)
				i = i;
		}
		if (m == 10) {
			i = (d + 273) % 7 + a;
			if (i >= 7)
				i = i - 7;
			else if (i < 7)
				i = i;
		}
		if (m == 11) {
			i = (d + 304) % 7 + a;
			if (i >= 7)
				i = i - 7;
			else if (i < 7)
				i = i;
		}
		if (m == 12) {
			i = (d + 334) % 7 + a;
			if (i >= 7)
				i = i - 7;
			else if (i < 7)
				i = i;
		}
	}
	if (i == 1)
		printf("MON\n");
	if (i == 2)
		printf("TUE\n");
	if (i == 3)
		printf("WED\n");
	if (i == 4)
		printf("THU\n");
	if (i == 5)
		printf("FRI\n");
	if (i == 6)
		printf("SAT\n");
	if (i == 0)
		printf("SUN\n");
	return 0;
}