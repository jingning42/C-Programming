#include <stdio.h>
int main()
{
  int i,j,k,m,p,n;
  printf("Matrix Mulplication! Calculate A x B .\n"
         "Matrix A = m x p, Matrix B = p x n.\n");
  printf("Please input m,p,n: ");
  scanf("%d%d%d",&m,&p,&n);
  int a[m][p],b[p][n],c[m][n];
  printf("Please input Matrix A: \n");
  for (i=0; i<m; i++)
    for (j=0; j<p; j++)
      scanf("%d",&a[i][j]);
  printf("Please input Matrix B: \n");
  for (i=0; i<p; i++)
    for (j=0; j<n; j++)
      scanf("%d",&b[i][j]);
  printf("Matrix C = A x B\n");
  for (i=0; i<m; i++)
    for (j=0; j<n; j++) {
      c[i][j] = 0;
      for (k=0; k<p; k++) 
        c[i][j] += a[i][k]*b[k][j];
      printf("c[%d][%d]=d%8d\n",i,j,c[i][j]);
      //printf("%8d%c",c[i][j],j%n?' ':'\n');  i will fix later!!
    }
  return 0;
}
