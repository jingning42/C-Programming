#include <stdio.h>

#define swap(a,b)  t = a; a = b; b = t;

int main()
{
  int m, n, t;
  printf("Please input two argument: ");
  scanf("%d%d",&m,&n);

  printf("m = %d\n",m);
  printf("n = %d\n",n);
  
  swap(m,n);
 
  printf("m = %d\n",m);
  printf("n = %d\n",n);

  return 0;
}
