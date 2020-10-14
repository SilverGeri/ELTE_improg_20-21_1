#include <stdio.h>

void toLowerCase(char* str) {
	char* ch = str;
	if (!ch) return;

	while (*ch) {
		if (*ch >= 'A' && *ch <= 'Z') {
			*ch += 32;
		}
		++ch;
	}
}


int main() {

	char str[] = "asdASsafdASD DF a";
	printf("%s\n", str);
	toLowerCase(str);
	printf("%s\n", str);
	
	return 0;
}
