#include <stdio.h>
#include <stdbool.h>


int main() {
	// infinite loops
	
	//int x = 1;
	 
	/*
	for (;;) {
		printf("fut1\n");
		//++x;
	}

	while(1) {
		printf("fut\n");
	}
	*/

	// for ciklus while-os atirata:
	// for (init ; condition; step) {
	//    logic
	// }

	// megegyezik:
	//
	// init
	// while(condition) {
	//	logic
	//	step
	// }
	
	int i;
	for (i = 5; i = 0; i--) {
		printf("fut %d\n", i);
	}
	
	i = 42;
	int j = 52;
	for (i = 0; i < 3; j = ++i) {
		printf("%d\n", j);
	}


	return 0;
}

