#include <stdlib.h>
#include <stdio.h>


struct vector_int {
	unsigned int size;
	unsigned int capacity;
	int* data;
};

typedef struct vector_int vector_int;


void vector_int_init(vector_int* v) {
	v->size = 0;
	v->capacity = 8;
	v->data = (int*)malloc(v->capacity * sizeof(int));
}

void free_vector_int(vector_int* v) {
	free(v->data);
}

void vector_int_push_back(vector_int* v, int item) {
	if (v->size >= v->capacity) {
		v->capacity *= 2;
		v->data = (int*)realloc(v->data, v->capacity * sizeof(int));
	}

	v->data[v->size++] = item;
}

void print_vector_int(const vector_int* const v) {
	printf("size: %d, capacity: %d, data: [", v->size, v->capacity);
	for (int unsigned i = 0; i < v->size; ++i) {
		printf("%d, ", v->data[i]);
	}
	printf("]\n");
}


int main() {
	vector_int v;
	vector_int_init(&v);
	for (int i = 0; i < 20; ++i) {
		vector_int_push_back(&v, i);
		print_vector_int(&v);
	}

	return 0;
}
