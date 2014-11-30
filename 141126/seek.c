/*************************************************************/
/*seek()函数：判断是否有不合格成绩                            */
/*形参：指向由3个int型元素组成的1维数组的行指针变量            */
/*返回值：(1)有不合格成绩，则返回指向本行首列的一个(列)指针；   */
/*       (2)没有有不合格成绩，返回值为指向下一行的一个(列)指针  */
/*************************************************************/
#include <stdio.h>

int *seek(int (*pnt_row)[3])
{
  int i = 0, *pnt_col; //定义一个列指针变量 pnt_col
  pnt_col = *(pnt_row + 1);

  for(; i < 3; i++)
    if(*(*pnt_row + i) < 60)
      {
        pnt_col = *pnt_row;
        break;
      }
  return (pnt_col);
}

int main()
{
  int grade[3][3] = {{55,65,75}, {65,75,85}, {75,80,90}};
  int i, j, *pointer;
  for (i = 0; i < 3; i++)
    {
      pointer = seek(grade + i);
      if (pointer == *(grade + i))
        {
          printf("No.%d grade list:",i+1);
          for (j = 0; j < 3; j++)
            printf("%d ",*(pointer + j));
          printf("\n");
        }
    }
  return 0;
}
