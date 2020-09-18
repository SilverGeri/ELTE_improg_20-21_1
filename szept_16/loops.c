#include <stdio.h>


int main() {
	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			printf("%d\t", (i + 1) * (j + 1));	
		}

		printf("\n\n");
	}


	for (float i = 0; i < 1.0; i += 0.1) {
		printf("%f,", i);
	}
	printf("\n");
}
