#include <stdio.h>
#include <string.h>

void strReplace(char *s, char targ, char repl) {
	for (; *s != '\0'; ++s) {
		if (*s == targ) *s = repl;
	}
}

int main() {
	char myS[] = "ff15gonext";
	strReplace(myS, 'f', 'g');
	printf("%s\n", myS);
}
