#include <stdio.h>
#include <string.h>

int main() {
	char str1[] = "hello";
	char str2[] = "world";

	int cmp = strcmp(str1, str2);
	printf("%d\n", cmp);

	char str3[] = "good";
	char str4[] = "bye";
	
	int cmp2 = strcmp(str3, str4);
	printf("%d\n", cmp2);

	char str5[10] = "hello";
	printf("%s\n", str5);
	int len = strlen(str5);
	printf("%d\n", len);
}

