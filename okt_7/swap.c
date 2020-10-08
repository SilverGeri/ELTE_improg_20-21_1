#include <stdio.h>

void swap(int* left, int* right) {
	int temp = *left;
	*left = *right;
	*right = temp;
}


int main() {
	int x = 1, y = 2;
	swap(&x, &y);

	printf("%d, %d\n", x, y);

	int arr[] = {3, 4};
	swap(&arr[0], &arr[1]);
	printf("%d, %d\n", arr[0], arr[1]);
}
