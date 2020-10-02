#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void sort(int* arr, int size) {
	for (int i = 0; i < size-1; ++i) {
		for (int j = i+1; j < size; ++j) {
			if (arr[j] < arr[i]) {
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}


int main() {
	time_t t;

	int array[101];
	srand((unsigned)time(&t));
	for (int i = 0; i < 101; ++i) {
		array[i] = rand() % 1000;
	}
	sort(array, 101);
	printf("median: %d\n", array[50]);


}
