#include <stdio.h>

#define M 5
#define N 5

int main()
{
  int a[M][N];
  int i,j;
  for (i = 0; i < M; i++)
    for (j = 0; j < N; j++)
      a[i][j] = 10*(i+1) + (j+1);
  
  int (*p)[N] = a;

  for (i = 0; i < M; i++)
    {
      for (j = 0; j < N; j++)
        {
          // four ways to represent the same element of array
          printf("%d ", a[i][j]);
          printf("%d ", p[i][j]);
          printf("%d ", *(*(p+i)+j));
          printf("%d ", *(p[i]+j));
          printf("%d ", (*(p+i))[j]);
        }
      printf("\n");
    }
 
  
       
  return 0;
}
