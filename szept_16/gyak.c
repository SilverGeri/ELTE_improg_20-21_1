#include <stdio.h>

int main() {
	int x = 3;
	printf("%d\n", x);

	//x = -3;
	printf("Adj meg egy egesz szamot: ");
	scanf("%d", &x);

	if (x % 2 == 0) {
		printf("x paros\n");
	} else {
		printf("x paratlan\n");
	}

	if (x < 0) {
		printf("x negativ\n");
	} else if (x > 0) {
		printf("x pozitiv\n");
	} else {
		printf("x nulla\n");
	}


	int vmi = 7;

	printf("%d\n", vmi++);
	printf("%d\n", vmi);
	printf("%d\n", vmi++);
	printf("%d\n", vmi);


	vmi = 7;	
	printf("%d\n", ++vmi);
	printf("%d\n", vmi);
	printf("%d\n", ++vmi);
	printf("%d\n", vmi);

}
