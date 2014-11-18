#include <stdio.h>

#define M 3
#define N 4

int main()
{
  int i, j; 
  char a[M][N] = {{'a','b','c','d'},{'e','f','g','h'},{'i','j','k','l'}};
  
  char *p = a[0];

  for (i = 0; i < M; i++)
    {
      for (j = 0; j < N; j++)
        {
          // four ways to represent the same element of array
          printf("%c ", a[i][j]);
          printf("%c ", p[i*N+j]);
          printf("%c ", *(p+i*N+j));
        }
      printf("\n");
    }  
       
  return 0;
}
