#include <stdio.h>

#define MAX(a, b) (a<b ? b : a)

#define PRINT(x) printf("%s", #x)

// #: stringize

int main() {
	int x = 1, y = 20;
	printf("bigger one is the %d\n", MAX(x++, --y));
	// printf("bigger one is the %d\n", x++ < --y ? --y : x++));

	printf("x: %d, y: %d\n", x, y);

	PRINT(5);
	PRINT(asdf);
	PRINT(x);

	return 0;
}
