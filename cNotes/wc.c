#include <stdio.h>
int isWhiteSpace(char c) {
	return c == '\n' || c == ' ' || c == '\t';
}


int main() {
	int lc = 0;
	int wc = 0;
	int cc = 0;
	char prevChar = ' ';
	for (int c = getchar(); c != EOF; c = getchar()) {
		++cc;
		if (c == '\n') ++lc;

		if (isWhiteSpace(c) && !isWhiteSpace(prevChar)) ++wc;

		prevChar = c;

	if (!isWhiteSpace(prevChar) ++wc;

	printf("\t%d\t%d\t%d", lc, wc, cc);
	}
}
