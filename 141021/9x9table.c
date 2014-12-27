/*********************************
 * Book P112 Exercise 5
 * print 9x9 multiplication table
 *********************************/

#include<stdio.h>
int main()
{
  int i,j;
  printf("   1   2   3   4   5   6   7   8   9\n");
  for(i=1;i<=9;i++)
    {
      for(j=1;j<=i;j++)
        printf("%4d",i*j);
      printf("\n");
    }
  return 0;
}
