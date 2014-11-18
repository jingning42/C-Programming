#include <stdio.h>
#include <math.h> 
// please gcc ~.c -lm 

#define MAX 32

double atof(char s[])
{
  double f = 0;
  int i, j=0, l, t=1, k=0, n=0;
  double help1,help2,help0=0;
  for (i=0; s[i] != '\0'; i++) {}
  l = i;                       // length of number                 

  /* mark the position of '-' and 'e'*/
  if (s[0] == '-') 
    t = -1;
  for (i=0; i<l; i++) 
    if (s[i] == 'e' || s[i] == 'E')
      n = i;

  /* main body */
  for (i = (n==0?l:n)-1; i >= (t==1?0:1) ;  i--) {
    if (s[i] != '.') {
      f += (s[i]-48)*pow(10,j);
      j += 1;
    }
    else 
      k = i + (t==1 ? 0:-1);
  }
  /* deal with e+1 part */
  if (n!=0) {
    for (i=n+2; i<l; i++) {
      help0 += (s[i]-48)*pow(10,l-i-1);
    }
    help0 *= (s[n+1]=='+'?1:-1);
        }
  
  /* deal with . and e part */
  help1 = pow(10,-1*(k==0 ? 0:j-k));
  help2 = (n==0?1:pow(10,help0));
  f *= t*help1*help2;
    
  return f;
}


int main()
{
  char a[MAX];
  double fnum;
  printf("Please input a number: ");
  scanf("%s",a);
  fnum = atof(a);
  printf("%.12f\n",fnum);
  return 0;
}


// fix me! command unfinished!
