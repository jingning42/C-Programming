#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* this function generate a pseudo-random list,
 N : the number of list elements,
 MAX : the range of random number is between 0 and MAX */
int generator(int randlist[],int N,int MAX)
{
  srand( (unsigned) time(NULL) );
  int k;
  for (k=0; k<N; k++)
    randlist[k] = rand() % (MAX+1);
  return 0;
}

/* we use select-sort to sort a list from small to large */
int SelectSort(int a[], int N)
{
  int i,j,temp,n;
  for (i=0; i<N; i++) {
    n = i;
    for (j=i; j<N; j++)
      if (a[j]<a[n])
        n = j;
    temp = a[i];
    a[i] = a[n];
    a[n] = temp;
  }
}

/* these two functions are designed to print out a list */
int printlist1(int a[], int N)
{
  int k;
  for (k=0; k<N; k++)
    printf("list[%d] = %d\n",k,a[k]);
  return 0;
}
int printlist2(int a[], int N)
{
  int k;
  printf("[");
  for (k=0; k<N-1; k++)
    printf("%d, ",a[k]);
  printf("%d]\n",a[N-1]);
  return 0;
}

int main()
{
  int N,MAX;
  printf("Please input the length of your randomness list: ");
  scanf("%d",&N);
  printf("Please set the MAX number of random range: ");
  scanf("%d",&MAX);
  int a1[N];
  generator(a1, N, MAX);
  printlist2(a1, N);
  SelectSort(a1, N);
  printlist2(a1, N);  
  return 0;
}
