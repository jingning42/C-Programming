/****************************
 * 测试卷一 第五题 2
 * 结构体数组
 ****************************/

#include <stdio.h>

#define MAX_LEN 64
#define N 3

struct student {
    int id;
    char name[MAX_LEN];
    int score[3];
    int sum;
};

void input_info(struct student stu[]);
void select_sort(struct student *p[]);
void output_info(struct student *p[]);    

int main()
{
    int i;
    struct student stu[N], *pstu[N];
    for (i = 0; i < N; i++) 
        pstu[i] = &stu[i];
    
    input_info(stu);
    select_sort(pstu);
    output_info(pstu);    
    return 0;
}

void input_info(struct student stu[])
{
    int i, j, sum;
    for (i=0; i < N; i++) {
        printf("Please input student's id: ");
        scanf("%d", &stu[i].id);
        printf("Please input student's name: ");
        scanf("%s", stu[i].name);
        sum = 0;
        for (j = 0; j < 3; j++) {
            printf("Please input student's score%d: ", j+1);
            scanf("%d", &stu[i].score[j]);
            sum += stu[i].score[j];
        }
        stu[i].sum = sum;
    }
}
    
void select_sort(struct student *p[])
{
    int i, j, max;
    struct student *temp;
    for (i = 0; i < N; i++) {
        max = i;
        for (j = i+1; j < N; j++)
            if(p[max]->sum < p[j]->sum)
                max = j;
        if (max != i) {
            temp = p[i];
            p[i] = p[max];
            p[max] = temp;
        }
    }
}

 
void output_info(struct student *p[])
{
    int i, j;
    for (i = 0; i < N; i++) {
        printf("id=%d, name=%s, ", p[i]->id, p[i]->name);
        for (j = 0; j < 3; j++)
            printf("score%d=%d, ", j, p[i]->score[j]);
        printf("total_score=%d\n", p[i]->sum);
    }
}

