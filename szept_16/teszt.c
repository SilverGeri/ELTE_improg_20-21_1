#include <stdio.h>
#include <stdlib.h>


int faktorialis(int n);

int main()
{
	int n;
	scanf("%d", &n);
	int i = faktorialis(n);
	printf("%d\n", i);
	return 0;
}

int faktorialis(int n){
	if (n <= 0) {
		printf("Nem.");
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	else {
		return n * faktorialis(n-1);
	}
}
