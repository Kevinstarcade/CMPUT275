#include <stdio.h>

int summation(int n) {
	if (n == 0) {
		return 0;
	}

	// we compute the result using the recursive result.
	// this means we must reach the end of the recursive calls to start doing math
	int result = summation(n-1) + n;
	return result;
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", summation(n));
}

