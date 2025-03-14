#include<stdio.h>
int strToInt (char *s) {
	int num = 0;
	for (; *s != '\0'; ++s) {
		*s = *s - '0';
		num = num*10 + *s;
	}
	return num;
}


int main(int argc, char **argv) {
	for (int i = 1;  i < argc; ++i) {
		printf("%d\n", strToInt(argv[i]));
	}
}
