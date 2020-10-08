#include <stdio.h>
#include <stdlib.h>

int* foo() {
	int x = 5;
	return &x;
}


int main() {
	int* p = foo();
	// printf("%d\n", *p);
	
	int x = 5;
	int* arr[] = {&x, NULL};

	printf("%d\n", *arr[1]);


	return 0;
}
