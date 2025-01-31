#include <stdio.h>
#include <string.h>

void printStrings(const char *arr, const unsigned int len) {
/*
	for ( int i = 0; i < len; ++i ) {
		if (arr[i] == '\0') {
		printf("\n");
		} else {
		printf("%c", arr[i]);
		}
	}
	printf("\n");
*/

	printf("%s\n", arr);

	


}






int main() {
	char string[] = {'a', 'b', '\0', 'd', 'e'};
	printStrings(string, 6);
}
