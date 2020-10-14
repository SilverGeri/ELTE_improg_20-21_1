#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
	printf("number of arguments: %d\nthese are:\n", argc);

	for (int i = 0; i < argc; ++i) {
		printf("%s\n", argv[i]);
	}


	printf("multiplication:\n");
	if (argc < 3) {
		printf("not enough paramters\n");
		return 1;
	}

	int first = atoi(argv[1]);
	int second = atoi(argv[2]);

	int result = 0;
	for (int i = 0; i < second; ++i) {
		result += first;
	}

	printf("%d\n", result);

	return 0;
}
