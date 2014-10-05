#include <stdio.h>
main()
{
  int x=3,y=8;
  x=(x=++y,x+5,x/5);
  printf("%d\n",x);
}
