#include <stdio.h>

#define MAX 50

int reverse(char a[])
{
  char b[MAX];
  int i, k;

  // b[] copy a[]
  for (i = 0; a[i] != '\0'; i++)
    {
      b[i] = a[i];
      k = i;
    }

  // reverse a[]
  for (i = 0; i <= k; i++)
    a[i] = b[k-i];
  return 0;
}

int main()
{
  char str1[MAX];
  printf("Please input a string: ");
  scanf("%s",str1);
  reverse(str1);
  puts(str1);
  return 0;
}
