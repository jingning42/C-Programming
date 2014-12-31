/**
 *
 * never thought this problem will cost so much time!
 * 二维数组作为函数参数的问题
 */

#include <stdio.h>

#define num_student 5
#define num_course 3

int score_input(float array[], int k)
{
  int i;
  printf("Please input 3 scores of student%d: ",k);
  for (i = 0; i < num_course; i++)
    scanf("%f",&array[i]);
  return 0;
}


float stu_average(float array[])
{
  int i;
  float sum = 0;
  for (i = 0; i < num_course; i++)
    sum += array[i];
  return sum/num_course;
}


// 二维数组需要告知列数
float cou_average(float array[][num_course], int k)
{
  int i;
  float sum = 0;
  for (i = 0; i < num_student; i++)
    sum += array[i][k];
  return sum/num_student;
}


int find_max(float array[][num_course], int *student, int *course)
{
  float temp = 0;
  int i,j;
  for (i = 0; i < num_student; i++)
    for (j = 0; j < num_course; j++)
      if (temp < array[i][j])
        {
          temp = array[i][j];
          *student = i+1;
          *course = j+1;
        }
          
  return 0;
}

int cal_variance(float array[], float *variance)
{
  int i, j;
  float sigmaX = 0, sigmaX2 = 0;
  for (i = 0; i < num_student; i++)
    {
      sigmaX += array[i];
      sigmaX2 += array[i]*array[i];
    }
  *variance = sigmaX2/num_student - (sigmaX/num_student)*(sigmaX/num_student);
  return 0;
}


int main()
{
  int x;
  int student, course;
  float score[num_student][num_course]={0};
  float stu_ave[num_student];
  float variance;

  for (x = 0; x < num_student; x++)
    score_input(score[x], x+1); 

  for (x = 0; x < num_student; x++)
    printf("average score of student%d = %f\n", x+1, stu_ave[x]=stu_average(score[x]));

  for (x = 0; x < num_course; x++)
    printf("average score of course%d = %f\n", x+1, cou_average(score, x));

  find_max(score, &student, &course);
  printf("student%d's course%d is highest!\n", student, course);

  cal_variance(stu_ave, &variance);
  printf("variance of all student's average score is %f !\n", variance);
  return 0;
}



// fix me! PLEASE add comments!
