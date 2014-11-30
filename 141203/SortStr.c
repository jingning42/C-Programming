#include <stdio.h>
#include <string.h>

#define MIN 64

int main()
{
  int i, j, min = 0;
  char str[5][MIN], *pstr[5], *tmp;
  printf("Please input 5 strings separated by enter:\n");
  for (i = 0; i < 5; i++)
    scanf("%s", str[i]);

  for (i = 0; i < 5; i++)
    pstr[i] = str[i];

  /* selection sort: 根据字符串大小,把指针数组进行排序 */
  for (i = 0; i < 5; i++) {
    min = i;
    for (j = i; j < 5; j++)
      if (strcmp(pstr[j], pstr[min]) < 0)
        min = j;
    tmp = pstr[i];
    pstr[i] = pstr[min];
    pstr[min] = tmp; // 也就是把地址换来换去了
  }

  printf("After sort: \n");
  
  for (i = 0; i < 5; i++)
    printf("%s\n", pstr[i]);
  
  return 0;
}


