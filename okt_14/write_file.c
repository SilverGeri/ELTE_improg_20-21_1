#include <stdio.h>


int main() {
	FILE* file = fopen("output.txt", "w");
	
	fputs("Gergely\n", file);

	int age = 29;
	fprintf(file, "Geri %d\n", age);

	fclose(file);

	int arr[] = {12,213,12,31,23,12,312};
	// file = fopen("even_numbers.txt", "w");
	file = fopen("even_numbers.txt", "a");
	for (int i = 0; i < sizeof(arr)/sizeof(int); ++i) {
		if (arr[i] % 2 == 0) {
			fprintf(file, "%d\n", arr[i]);
		}
	}
	fclose(file);


	return 0;
}
