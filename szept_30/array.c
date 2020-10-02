#include <stdio.h>


void set_zero(int* array, int size) {
	// sizeof(array): pointer meret
	for(int i = 0; i < size; ++i) {
		array[i] = 0;
	}
}

int sum(int* array, int size) {
	int retval = 0;
	for(int i = 0; i < size; ++i) {
		retval += array[i];
	}

	return retval;
}


void printmax(int* array, int size) {
	if (size == 0) {
		return;
	}
	int max = array[0];
	for (int i = 1; i < size; ++i) {
		if (array[i] > max) {
			max = array[i];
		}
	}
	
	printf("A legnagyobb elem a(z) %d\n", max);
}

int weighted_sum(int* array, int* weights, int size) {
	int retval = 0;
	for(int i = 0; i < size; ++i) {
		retval += array[i] * weights[i];
	}

	return retval;
}


int main() {
	int array[3]; //= {0, 0, 0};

	//for(int i = 0; i < (sizeof(array) / sizeof(int)); ++i) {
	//	array[i] = 0;
	//}
	
	set_zero(array, sizeof(array)/ sizeof(int));

	array[0] = 3;
	array[1] = 5;
	array[2] = 4;

	for(int i = 0; i < 3; ++i) {
		printf("%d, ", array[i]);
	}	
	printf("\n");

	printf("sum of the elements: %d\n", sum(array, sizeof(array)/sizeof(int)));

	int weights[] = {1, 2, 3};
	printf("weighted sum of the elements: %d\n", weighted_sum(array, weights, sizeof(array)/sizeof(int)));
	printmax(array, sizeof(array)/sizeof(int));
}
