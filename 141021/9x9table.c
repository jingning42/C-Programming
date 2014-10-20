#include<stdio.h>
/*print 9x9 multiplication table*/
main()
{
  int i,j;
  printf("   1   2   3   4   5   6   7   8   9\n");
  for(i=1;i<=9;i++)
    {
      for(j=1;j<=i;j++)
        printf("%4d",i*j);
      printf("\n");
    }
}
