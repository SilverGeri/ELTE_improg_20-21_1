#include <stdio.h>
#include <stdlib.h>

void valami(int* param) {
	*param = 6;
}

// void foo(int asdf);

int main() {
	// int y;
	int x = 5;
	// valami(&x);
	// printf("%d\n", x);
	//
	
	int* p = &x;
	printf("x: %d, %p\n", x, &x);
	printf("p: %d, %p, %p\n", *p, p, &p);

	*p = 3;

	int* p2;
	// *p2 = 8; // undefined

	p2 = p; // also points to p which points to x
	p = NULL; // null pointer, indicates empty

	// example for null pointer: linked list
	// head -> item 1 -> item 2 -> item 3 -> NULL

	int a = 5;
	int* xp = &a;
	int** pp = &xp;

	printf("%d, %d, %d\n", a, *xp, **pp);
	**pp = 10;
	printf("%d, %d, %d\n", a, *xp, **pp);

	// point to self
	// int* sp = &a;
	// sp = &sp;
	// type clash

	return 0;
}
