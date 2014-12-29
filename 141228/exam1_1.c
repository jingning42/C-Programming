/******************************
 * 测试卷一 第五题 1
 * 矩阵转置处理,二维数组和指针
 ******************************/

#include <stdio.h>

#define N 4

void convert(int *p);
int total(int a[][4], int k);

int main()
{
    static int a[N][N] = {{1,1,1,1},{2,2,2,2},{3,3,3,3},{4,4,4,4}};
    int *p, i, sum;
    p = *a;
    
    sum = total(a, N);
    printf("%d\n", sum);

    convert(p);
    for (i = 0; i < N; i++) 
        printf("%d %d %d %d\n",a[i][0], a[i][1], a[i][2], a[i][3]);
    return 0;
}

int total(int a[][4], int k)
{
    int i, sum = 0;
    for (i = 0; i < N; i++) 
        sum += a[i][i];
    return sum;
}

/* 由于之前传入的实参是p,下面的函数不可以用数组实现 */
void convert(int *p)
{
    int i, j, temp;
    for (i = 0; i < N; i++)
        for (j = i+1; j < N; j++) {
            temp = *(p+4*i+j);
            *(p+4*i+j) = *(p+4*j+i);
            *(p+4*j+i) = temp;
        }
}
