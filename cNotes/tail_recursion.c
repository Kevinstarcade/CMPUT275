#include <stdio.h>
int sum_tail_rec(int n, int sum) {
	if (n == 0) return sum;
	return sum_tail_rec(n-1, sum+n);
	// stackframe for n does not need to exist for n-1
}


int summation(int n) {
	// TAIL recursion says that you pass everything you need to do the calculation in the recursive process
	// so there is no reason to keep the stackframe for finished recursion calls
	
	return sum_tail_rec(n, 0);
	
	/*
	if (n == 0) {
		return 0;
	}
	int result = summation(n-1) + n;
	return result;
	*/
}

int main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", summation(n));
}

