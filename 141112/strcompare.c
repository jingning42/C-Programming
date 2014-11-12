#include <stdio.h>

char strcompare(char a[],char b[])
{
  int i;
  for (i=0; a[i]!='\0' || b[i]!='\0'; i++)
    {
      if (a[i]>b[i])
        return '>';
      if (a[i]<b[i])
        return '<';
    }  
  return '=';
}

int main()
{
  char a[1000],b[1000];
  printf("Please input two string separate by space: ");
  scanf("%s%s",a,b);
  printf("%s %c %s\n", a, strcompare(a,b), b);
  return 0;
}
