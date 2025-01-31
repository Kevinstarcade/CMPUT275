#include <stdio.h>

int Print_binary(int x) {
	if (x==0) {
		printf("0");
		return 0;
	}


	int i = 1;
	while (i <= x) {
		i = i*2;
	}

	i = i/2;
	while  (i > 0) {
		if (i <= x) {
			printf("1");
			x = x - i;
		} else {
			printf("0");
		}
		i = i/2;
	}
	printf("\n");
}

int main() {
	Print_binary(5);
	Print_binary(10);
	Print_binary(23984);
	return 0;
}
