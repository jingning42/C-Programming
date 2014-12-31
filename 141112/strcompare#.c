/* in this code we write 4 functions to input a character array .
   we can see their different usages! */

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

/* scanf() */
/* you can only input a string before space */
int inputarray0(char a[])
{
  printf("Please input a string end with 'enter': ");
  scanf("%s",a);  
  return 0;
}

/* getchar() */
/* getchar() end with '\n' */
int inputarray1(char a[])
{
  int i=0;
  printf("Please input a string end with 'enter': ");
  while ((a[i]=getchar()) != '\n')
      i++;
  a[i] = 0;
  //for (i=0; a[i]!=0; i++)
  //  printf("a[%d]=%c\n",i,a[i]);
  printf("%s\n",a);  
  return 0;
}

/* getchar() end with 'EOF' */
int inputarray2(char a[])
{
  int i=0;
  printf("Please input a string end with 'enter' and 'ctrl'+'D': ");
  while ((a[i]=getchar()) != EOF)
    {
      printf("a[%d]=%c\n",i,a[i]);
      i++;
    }
  a[i] = 0;
  printf("%s\n",a);
  return 0;
}

/* gets() and puts() */
/* gets() may cause a lot of warnings!*/
int inputarray3(char a[])
{
  printf("Please input a string end with 'enter': ");
  gets(a);
  puts(a);
  return 0;
}


int main()
{
  char a[1000]={0};
  char b[1000]={0};
  inputarray3(a);
  inputarray3(b);
  printf("%s %c %s\n", a, strcompare(a,b), b);
  return 0;
}
