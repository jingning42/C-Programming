/*输入语句,判断单词个数*/
#include <stdio.h>
#define N 1000

int main()
{
  char a[N]={0};  //**
  int i=1,nspece=0,nword;
  a[0]=' ';
  a[N-1]=' ';
  printf("Please input some sentencs.When stop input 'ctrl+D'.\n");

  while ( (a[i]=getchar()) != EOF)
    i++;
  a[i]=0;

  for (i=0; i<N && a[i]=='\0'; ++i) 
    if (a[i]<'A' || (a[i]>'Z' && a[i]<'a') || a[i]>'z')
      a[i] = ' ';  // fix me!

  printf("%s\n",a);

  for (i=0; i<N; i++)
    if (a[i]==' ' && a[i+1]!=' ')
      nspece += 1;

  nword = nspece - 1;
  printf("number of words = %d\n",nword);
  return 0;
}

