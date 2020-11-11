#include <stdio.h>
#include "my_utils.h"
#include "my_utils.h"

int main() {
	int x = 1, y = 2;
	printf("x: %d, y:%d\n", x, y);
	swap(&x, &y);
	printf("x: %d, y:%d\n", x, y);

	return 0;
}

