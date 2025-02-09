#include <stdio.h>
#include <stdlib.h>

int luhns(size_t num) {
	
	int checkDigit = num % 10;
	num = (num - checkDigit) / 10;
	int sum = 0;
	int doubleDigit = 1;

	for (int digit; num > 0;) {
		digit = num % 10;
		num = (num - digit) / 10;

		if (doubleDigit) {
			digit *= 2;
			if (digit >= 10) digit -= 9;
		}
		doubleDigit = !doubleDigit;
		sum += digit;
	}
	sum = (sum * 9) % 10;
	return (sum == checkDigit);

}

int main() {
	size_t x;
	scanf("%ld", &x);
	if (luhns(x)) printf("Valid\n");
	else printf("Invalid\n");
	return 0;
}
