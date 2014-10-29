#include <stdio.h>
#define N 10
int main()
{
  int a[N],i,j,temp,n;
  printf("Please input %d integer number: ",N);
  for (i=0; i<N; i++)
    scanf("%d",&a[i]);
  for (i=0; i<N; i++) {
    n = i;
    for (j=i; j<N; j++)
      if (a[j]<a[n])
        n = j;
    temp = a[i];
    a[i] = a[n];
    a[n] = temp;
  }
  for (i=0; i<N; i++)
    printf("a[%d]=%d\n",i,a[i]);
  return 0;
}
