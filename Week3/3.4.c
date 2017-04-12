#include <stdio.h>

void transpose_matrix(int size, int matrix[][size]) {
	int i, j;
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++)
            printf("%d ", matrix[j][i]);
        puts("");
    }
	putchar('\n');
}

int main(void)
{
	int matrix[][3] = { {1, 1, 1}, {2, 2, 2}, {3, 3, 3} };
	
	int size = sizeof(matrix) / sizeof(matrix[0]);
	
	int i, j;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++)
            printf("%d ", matrix[i][j]);
        puts("");
    }
	putchar('\n');
	
	transpose_matrix(size, matrix);
}

