#include <stdio.h>


int counter() {
	static int counter = 0;
	++counter;

	return counter;
}


int main() {
	int x = 1;
	{
		int y = 2;
		printf("%d\n", x);
	}

	// printf("%d\n", y); // error: y is out of scope
	
	printf("%d\n", counter());
	printf("%d\n", counter());
	printf("%d\n", counter());
	printf("%d\n", counter());
	printf("%d\n", counter());
	printf("%d\n", counter());
	printf("%d\n", counter());

	{
		int vmi = 1;
		for (int i = 0; i < 10; ++i) {
			//static int vmi = 1;
			++vmi;
			printf("vmi: %d\n", vmi);
		}
	}

	//printf("%d\n", vmi);

	return 0;

}

