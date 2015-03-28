#include <stdio.h>
#define N 4
int main()
{
  //Part#1 SelectionSort
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
  
  //Part#2 BinarySearch
  int k=N/2,low=0,high=N-1,find_num;
  printf("Please input a integer number you want to find: ");
  scanf("%d",&find_num);

  while (a[k] != find_num){
    if (a[k] > find_num)
      high = k;
    else 
      low = k;
    if (k == (low+high)/2){   //左边判断边界条件有错
      printf("The number is not found in this array.\n");
      printf("%d\n",k);
      return 0;
    }
    k = (low+high)/2;
  }
  printf("Found! a[%d]=%d is the number you find.\n",k,find_num);
  return 0;
  }
