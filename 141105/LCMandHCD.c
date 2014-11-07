#include <stdio.h>
int main()
{
  int m,n;
  printf("Please input two natural number: ");
  scanf("%d%d",&m,&n);
  printf("lowest common multiple of m and n :%d\n"
         "highest common divisor of m and n is :%d\n",
         LCM(m,n),HCD(m,n));
  return 0;
}

int LCM(int m,int n)
{
  int x = (m>n ? m:n);
  while (x%m!=0 || x%n!=0) {
    x += m;
  }
  return x;
}

int HCD(int m,int n)
//http://zh.wikipedia.org/wiki/%E8%BC%BE%E8%BD%89%E7%9B%B8%E9%99%A4%E6%B3%95
{
  int temp;
  if (n > m){
    temp = m;
    m = n;
    n = temp;
  }
  
  int r = m % n;
  while (r != 0) {
    m = n;
    n = r;
    r = m % n;
  }  // mark!
  return n;
}
  



  
