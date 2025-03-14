#include <stdio.h>
#include <string.h>

int main () {
	char arr[3]= {"WHITE", "WHITE", "WHITE"};
	for (int i = 0; i < 3; ++i) {
		printf("%s", *arr[i]);
	}
	

}	
