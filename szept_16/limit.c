#include <stdio.h>
#include <math.h>


int int_pow_2(unsigned int exponent) {
	int result = 1;
	for (unsigned int i = 0; i < exponent; ++i) {
		result *= 2;
	}

	return result;
}

int main() {
	printf("%ld\n", sizeof(int)); // 4 bajt az en gepemen

	// 4 bajt: 00000000 00000000 00000000 00000000 // ez a legkisebb
	// 4 bajt: 11111111 11111111 11111111 11111111 // ez a legnagyobb
	
	//for (int i = 0; i < 10; ++i) {
	//	printf("%d\n", int_pow_2(i));
	//i}
	//
	printf("%d\n", int_pow_2(31)-1);
}
