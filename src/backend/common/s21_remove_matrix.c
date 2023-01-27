#include "s21_matrix.h"

void s21_remove_matrix(matrix_t *A) {
  if (A->matrix) free(A->matrix);
  A->columns = 0;
  A->rows = 0;
  A->matrix = NULL;
}
