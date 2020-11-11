#include <stdio.h>


int global = 0;


void foo() {
	global = 5;


	int x = 1;
}

int main() {
	printf("%d\n", global);
	foo();
	printf("%d\n", global);

	return 0;
}
