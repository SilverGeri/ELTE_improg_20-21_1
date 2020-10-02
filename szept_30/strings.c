#include <stdio.h>


int strlen2(char* str) {
	int size = 0;
	//int i = 0;

	while (str[size] != '\0') {
		size++;
	}

	return size;
}

int main() {
	char str[] = "hello world";

	char buffer[100];
	scanf("%s", buffer);

	// printf("%ld\n", sizeof(str));
	printf("Number of characters in \"%s\": %d\n", buffer, strlen2(buffer));

	return 0;
}
