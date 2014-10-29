#include <stdio.h>
int main()
{
  int i,j,m,n;
  printf("Matrix Transpose! \n"
         "Please input the rows and columns of matrix A: \n");
  scanf("%d%d",&m,&n);
  int a[m][n];
  printf("Please input matrix A: \n");
  for (i=0; i<m; i++)   // alwasy use , instead of ; warning!
    for(j=0; j<n; j++) 
      scanf("%d",&a[j][i]);
  printf("the transpose of matrix A , A^-1 = :\n");
  for (i=0; i<n; i++)  
    for(j=0; j<m; j++) 
      printf("%d%c",a[i][j],j!=m-1?' ':'\n');
  return 0;
}
