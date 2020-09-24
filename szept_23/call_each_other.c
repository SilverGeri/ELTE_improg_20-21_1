#include <stdio.h>
#include <stdlib.h>


// int count = 0; global variables are evil

int a(int param, int* count);
int b(int param, int* count);

int a(int param, int* count) {
	++(*count);
	int new_value = param / 2;
	if (new_value > 0) {
		b(new_value, count);
	}
}

int b(int param, int* count) {
	++(*count);
	int new_value = param - 1;
	if (new_value > 0) {
		a(new_value, count);
	}
}


int main(int argc, char* argv[]) {

	for (int i = 0; i < argc; ++i) {
		printf("%s\n", argv[i]);
	}

	int init_value = atoi(argv[1]);
	int count = 0;
	
	a(init_value, &count);

	printf("%d call happened\n", count);

	return 0;
}
