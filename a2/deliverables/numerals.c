#include <stdio.h>

int letterToNum(char c) {
	if (c == 'I') return 1;
	if (c == 'V') return 5;
	if (c == 'X') return 10;
	if (c == 'L') return 50;
	if (c == 'C') return 100;
	if (c == 'D') return 500;
	if (c == 'M') return 1000;
	return 0;
}


int numerals() {
	int pnum = letterToNum(getchar());
	int sum = 0;
	char c;
	int cnum;

	for (c = getchar(); c != EOF; pnum = cnum, c = getchar()) {
		cnum = letterToNum(c);
		if (cnum > pnum) pnum = -pnum;
		sum += pnum;
	}
	sum += cnum;
	return sum;
}


int main () {
	int x = numerals();
	printf("%d\n", x);
}
