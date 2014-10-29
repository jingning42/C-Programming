#include <stdio.h>
#define N 10
int main()
{
  int a[N],i,j,temp,status=1;
  printf("Please input %d integer number: ",N);

  for (i=0; i<N; i++)
    scanf("%d",&a[i]);

  for (i=0; i<N-1; i++){
    while (status){
      status = 0;
      for (j=0; j<N-i-1; j++){
        if (a[j]>a[j+1]){
          temp = a[j+1];
          a[j+1] = a[j];
          a[j] = temp;
          status = 1;
        }
      }
    }
  }
  
  for (i=0; i<N; i++)
    printf("a[%d]=%d\n",i,a[i]);
  return 0;
}
