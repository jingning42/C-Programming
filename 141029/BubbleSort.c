#include <stdio.h>
#define N 10
int main()
{
  int a[N],i,j,temp;
  printf("Please input %d integer number: ",N);
  for (i=0; i<N; i++)
    scanf("%d",&a[i]);
  for (i=0; i<N; i++) {
    for (j=0; j<N-i-1; j++) {
      if (a[j]>a[j+1]) {
        temp = a[j+1];
        a[j+1] = a[j];
        a[j] = temp;
      }
    }
  }
  for (i=0; i<N; i++)
    printf("a[%d]=%d\n",i,a[i]);
  return 0;
}
