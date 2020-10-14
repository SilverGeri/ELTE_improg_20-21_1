#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	if (argc < 2) {
		printf("PLease enter a filename\n");
		return 1;
	}

	FILE* input = fopen(argv[1], "r");

	if (input == NULL) {
		printf("invalid filename");
		return 1;
	}
	char buffer[255];
	int result = 0;

	while(fgets(buffer, 255, input) != NULL) {
		result += atoi(buffer);
	}
	fclose(input);

	printf("sum of numbers in file: %d\n", result);
	
	return 0;
}
