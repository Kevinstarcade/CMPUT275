#include <stdio.h>

void replace(int arr[], int arrLen, int tar, int repl) {
	for (int i = 0; i < arrLen; ++i) {
		if (arr[i] == tar) arr[i] = repl;
	}
}


int main() {
	int arr[8] = {1, 2, 1, 2, 3, 2, 1, 2};
	replace(arr, 8, 2, 6);
	for (int i = 0; i < 8; ++i) printf("%d ", arr[i]);
	printf("\n")
}
