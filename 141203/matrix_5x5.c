#include <stdio.h>
#include "SelectSort.c"

/* 这一题要怎么用指针啊！用指针函数呢还是指针数组呢？ */

int change(int mat[]);

int main()
{
  int i, j;
  int matrix[25];   // 为什么用一维数组呢...
  srand( (unsigned) time(NULL) ); // 这一行其实我不懂..
  for (i = 0; i < 25; i++)
    *(matrix + i) = rand() % 20;   

  change(matrix);
  
  for (i = 0; i < 5; i++) {
    for (j = 0; j < 5; j++)
      printf("%4d",*(matrix+i*5+j));
    printf("\n");
  }
             
  return 0;
}


int change(int *mat)
{
  int i = 0, j = 0;
  SelectSort(mat, 25);
  int help[5] = {mat[0], mat[1], mat[2], mat[3], mat[24]};
  while (i < 25) {
    if (i != 12) {
      *(mat+i) = help[j%4];
      j++;
    }
    i++;
      }
  mat[12] = help[4];
  return 0;
}


