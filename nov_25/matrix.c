#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Matrix {
	unsigned int row;
	unsigned int col;
	int* data;
};

typedef struct Matrix Matrix;

void init_matrix(Matrix* matrix, int row, int col) {
	matrix.row = row;
	matrix.col = col;
	matrix.data = (int*)malloc(row * col * sizeof(int));
}

void free_matrix(Matrix* matrix) {
	free(matrix.data);
}


int* at(const Matrix* const matrix, unsigned int row, unsigned int col) {
	if (row >= matrix->row || col > matrix->col) {
		return NULL;
	}
	return &matrix->data[matrix->col * row + col];
}


Matrix multiply_matrices(const Matrix* const lhs, const Matrix* const rhs, bool* success) {
	Matrix result;

	if (lhs->col == rhs->row) {
		success = true;
	} else {
		success = false;
		return result;
	}

	init_matrix(&result, lhs->row, rhs->col);
	// homework: do the matrix multiplication
	//
	
	return result;
}


