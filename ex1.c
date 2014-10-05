#include<stdio.h>
main()
{
  int a,b;
  char c1,c2;
  float d,e;
  double f,g;
  long m,n;
  unsigned int p,q;
  a=61; b=62;
  c1='a'; c2='b';
  d=3.56; e=-6.78;
  f=3157.890121; g=0.123456789;
  m=50000; n=-60000;
  p=32768 ;q=4000;
  printf("sizeof:%d, a=%d, b=%d\n",sizeof(int),a,b);
  printf("sizeof:%d, c1=%c, c2=%c\n",sizeof(char),c1,c2);
  printf("sizeof:%d, d=%6.2f, e=%6.2f\n",sizeof(float),d,e);
  printf("sizeof:%d, f=%15.6f, g=%15.12f\n",sizeof(double),f,g);
  printf("sizeof:%d, m=%1d, n=%1d\n",sizeof(long),m,n);
  printf("sizeof:%d, p=%u, q=%u\n",sizeof(unsigned),p,q);
}
