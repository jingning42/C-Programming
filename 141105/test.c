#include <stdio.h>
int main()
{
  char a[100];
  while (gets(a)!=0)
    printf("%s\n",a);
  return 0;
}
