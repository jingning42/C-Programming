#include<stdio.h>
#include<stdlib.h>

void transpose(int n, int *mat) {
    int i, j;
    for (i=0; i<n; i++)
        for (j=0; j<i; j++) {
            int tmp;
            tmp = mat[i*n + j];
            mat[i*n + j] = mat[j*n + i];
            mat[j*n + i] = tmp;
        }
}

int main()
{
    int n, i, j;
    int *mat;
    printf("Input matrix size:\n");
    scanf("%d", &n);
    mat = malloc(n * n * sizeof(int));
    printf("Input matrix elements:\n");
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
            scanf("%d", &mat[i*n + j]);

    transpose(n, mat);

    printf("Transposed matrix:\n");
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++)
            printf("%d ", mat[i*n + j]);
        printf("\n");
    }
    return 0;
}
