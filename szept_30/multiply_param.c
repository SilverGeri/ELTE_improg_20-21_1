#include <stdio.h>

int multiply_in_retval(int param) {
	return param * -1;
}


void multiply_in_side_effect(int *param) {
	*param = *param * -1;
}


int main() {
	int x = 5;
	// printf("%d\n", multiply_in_retval(x));
	
	multiply_in_side_effect(&x);
	printf("%d\n", x);

	unsigned int y = 5;
	multiply_in_side_effect(&y);
	printf("%u\n", y);


	printf("%ld, %ld\n", sizeof(int), sizeof(char));
	printf("%ld, %ld\n", sizeof(int*), sizeof(char*));

	return 0;
}
