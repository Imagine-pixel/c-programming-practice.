#include <stdio.h>
#include <stdlib.h>
int main() {
    int r1, c1, r2, c2;
    int *A, *B, *C;

    printf("Enter rows and columns of A: ");
    scanf("%d %d", &r1, &c1);
    int matrix1[r1][c1];

    printf("Enter rows and columns of B: ");
    scanf("%d %d", &r2, &c2);
    int matrix2[r2][c2];
    

    A = malloc((size_t)r1 * c1 * sizeof(int));
    B = malloc((size_t)r2 * c2 * sizeof(int));
    C = malloc((size_t)r1 * c2 * sizeof(int));

    printf("Enter elements of A:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of B:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            C[i * c2 + j] = 0;

            for (int k = 0; k < c1; k++) {
                C[i * c2 + j] +=
                    matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Result matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", C[i * c2 + j]);
        }
        printf("\n");
    }

    free(A);
    free(B);
    free(C);

    return 0;
}