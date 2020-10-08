#include <stdio.h>

int sum(int* arr, int size) {
	int sum = 0;

	for (int i = 0; i < size; ++i) {
		// sum += arr[i]; // with operator[]
		sum += *(arr + i); // with pointer aritmetics
	}

	return sum;
}

int sum2(int* begin, int* end) {
	// 1, 2, 3, 4
	// p = begin, *p=1
	// ++p: p is increased by 1 (times sizeof int), *p=2
	// ++p: same here, *p=3
	// ++p: same here, *p=4
	// p is equal to end, loop terminates
	
	int sum = 0;
	printf("begin: %p, end: %p\n", begin, end);

	for (int* p = begin; p < end; ++p) {
		printf("%p\n", p);
		sum += *p;
	}

	return sum;
}


int main() {
	int arr[] = {1,2,3,4};

	printf("%d\n", sum(arr, sizeof(arr)/sizeof(int)));
	printf("%d\n", sum2(arr, &arr[0] + (sizeof(arr)/sizeof(int))));

	return 0;
}
