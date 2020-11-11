#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// asdf
void reverse(char* str) {
	const unsigned int size = strlen(str);
	for (unsigned int i = 0; i <= size / 2; ++i) {
		char temp = str[i];
		str[i] = str[size-i-1];
		str[size-i-1] = temp;
	}
}


// str: string to be reversed
char* reverse_copy(char* str) {
	const unsigned int size = strlen(str);
	char* copy = (char*)malloc((size+1) * sizeof(char));

	for (unsigned int i = 0; i < size; ++i) {
		copy[i] = str[size-i-1];
	}
	copy[size] = '\0';

	return copy;
}


int main(int argc, char* argv[]) {
	/*
	 *argv[0] -> asdfsadfsa\0
	 *argv[1] -> asfdsadfasfdsa\0
	 *argv[2] -> ddf\0
	 *
	 *argv[0][1] == 's'
	 *
	 *
	 * */
	char buffer[20];
	scanf("%s", buffer);

	printf("input string: %s\n", buffer);

	char* copy = (char*)malloc((strlen(buffer) + 1) * sizeof(char));
	for (unsigned int i = 0; i < strlen(buffer); ++i) {
		copy[i] = buffer[i];
	}
	copy[strlen(buffer)] = '\0';
	printf("string length: %ld\n", strlen(buffer));

	printf("copy:         %s\n", copy);
	reverse(copy);
	printf("original string: %s\n", buffer);
	printf("reversed copy:   %s\n", copy);

	char* reversed_copy = reverse_copy(buffer);
	printf("reversed copy:   %s\n", reversed_copy);

	printf("%p\n%p\n", copy, reversed_copy);

	free(copy);
	free(reversed_copy);


	printf("--------------------\n");

	char* str_array[5];
	for(int i = 0; i < 5; ++i) {
		scanf("%s", buffer);
		str_array[i] = reverse_copy(buffer);
	}

	for(int i = 0; i < 5; ++i) {
		printf("%s\n", str_array[i]);
		free(str_array[i]);
	}


	
	return 0;
}
