/* Josephus problem: (a well-known problem)
   wikipedia > http://en.wikipedia.org/wiki/Josephus_problem
   wolfram > http://mathworld.wolfram.com/JosephusProblem.html */

#include <stdio.h>

#define MAX 1000

int main()
{
  int alive;    // alive = number of people alive in last circle
  int i, j;
  int n, m, s;              //  s mean the people will be killed next!
  int last[MAX] = {0};      // last_circle
  int now[MAX] = {0};       // now_circle
  int death[MAX] = {0};     // death_order
  printf("n denote the number of people in the initial circle.\n"
         "m denotes the count for each step.\n"
         "Begin at sth people in the initial circle.\n");
  printf("Please input n, m, s separated by 'space': ");
  scanf("%d%d%d",&n,&m,&s);
  
  /* initialize last circle */
  for (i=0; i<n; i++)
    last[i] = i+1;
  alive = n;
  
  /* game begin ! */
  while (alive > 1)
    {
      /* kill people! */
      s = (s-1+m)%alive;
      if (s == 0)    // if s == 0; s-1 == -1 and (s-1)%alive == -1 fail
        s = alive;    
      death[n-alive] = last[s-1];   
      last[s-1] = 0;
              
      j = 0;
      /* last to now */
      for (i=0; i<alive; i++)
        if (last[i]!=0) {  //  fixed! has change while to if
          now[j] = last[i];
          j++;
        }

      /* copy now to last */
      alive -= 1;
      for (i=0; i<alive; i++) 
        last[i] = now[i];
    }
  
  printf("people who alive is %d !\n",last[0]);
  /* print out death order */
  for (i=0; i<n-1; i++)
    printf("death[%d] = %d \n",i,death[i]);
  
  return 0;
}
