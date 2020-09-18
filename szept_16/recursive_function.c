#include <stdio.h>


void print_my_name() {
	printf("Geri\n");
}

double average(int first, int second) {
	return (first + second) / 2.0;
}


int factorial(int n) {
	if (n < 1) {
		printf("semmi ertelme\n");
		return -1;
	}

	if (n == 1) {
		return 1;
	}

	return n * factorial(n-1);
}


int main() {
	print_my_name();
	print_my_name();
	print_my_name();

	double result = average(5, 6);
	printf("%f\n", average(3, 8));

	printf("%d\n", factorial(-2));
	printf("%d\n", factorial(0));
	printf("%d\n", factorial(5));
	printf("%d\n", factorial(7));

}
