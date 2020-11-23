int square(int n) {
	return n * n;
}


extern int n;
int square_global() {
	return n * n;
}


extern int error;

int scalar_product(int* left, int* right, int left_size, int right_size) {
	int retval = 0;
	if (left_size < 0 || right_size < 0 || left_size != right_size) {
		error = 1;
		return retval;
	}

	for (int i = 0; i < left_size; ++i) {
		retval += left[i] * right[i];
	}
	
	return retval;
}
