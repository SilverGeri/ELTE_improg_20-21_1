#include <stdio.h>
#include <string.h>

union Example {
	int a;
	double b;
	char str[4];
};

typedef union Example Example;


int main() {
	Example e;

	printf("sizeof e: %ld\n", sizeof(e));

	e.a = 5;
	printf("%d\n%f\n%s\n", e.a, e.b, e.str);

	e.b = 3.5;
	printf("%d\n%f\n%s\n", e.a, e.b, e.str);
	strcpy(e.str, "asd");

	printf("%d\n%f\n%s\n", e.a, e.b, e.str);

	return 0;
}
