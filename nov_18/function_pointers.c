#include <stdio.h>

int foldl(int* arr, int size, int neutral, int (*f_ptr)(int, int)) {
	int retval = neutral;
	for (int i = 0; i < size; ++i) {
		retval = (*f_ptr)(retval, arr[i]);
	}

	return retval;
}


int add(int left, int right) {
	return left + right;
}

int product(int left, int right) {
	return left * right;
}

int sum_arr(int* arr, int size) {
	return foldl(arr, size, 0, &add);
}

int product_arr(int* arr, int size) {
	return foldl(arr, size, 1, &product);
}

int main() {
	int (*f_ptr)(int, int) = &add;

	printf("sum is %d\n", (*f_ptr)(4, 5));

	f_ptr = &product;
	printf("product is %d\n", (*f_ptr)(4, 5));


	int arr[] = {1, 2, 3, 4};
	int size = sizeof(arr) / sizeof(int);
	// printf("sum: %d, product: %d\n", foldl(arr, size, 0, &add), foldl(arr, size, 1, &product));
	printf("sum: %d, product: %d\n", sum_arr(arr, size), product_arr(arr, size));


	return 0;
}

/*
std::vector<int> v;
for (size_t i = 0; i < v.size(); ++i) {
	// ...
}

for (const auto& item : v) {
	// ...
}
*/

