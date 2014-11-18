#include <stdio.h>

#define POP 5
#define NUM 3

int score_input(float array[], int k)
{
  int i;
  printf("Please input 3 scores of student%d: ",k);
  for (i = 0; i < NUM; i++)
    scanf("%f",&array[i]);
  return 0;
}


float stu_average(float array[])
{
  int i;
  float sum=0;
  for (i = 0; i < NUM; i++)
    sum += array[i];
  return sum/NUM;
}


float suj_average(int t)
{
  int i;
  return 0;
}

int main()
{
  int x;
  float score[POP][NUM]={0};
  for (x = 0; x < POP; x++)
    score_input(score[x], x+1); 
  for (x = 0; x < POP; x++)
    printf("average score of student%d = %f\n", x+1, stu_average(score[x]));
  return 0;
}
