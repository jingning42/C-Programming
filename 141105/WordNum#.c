/*输入语句,判断单词个数*/

#include<stdio.h>
int ischar(char now) {
    return (now >= 'a' && now <= 'z'
            || now >= 'A' && now <= 'Z'
            || now >= '0' && now <= '9');
}
int main()
{
    char last = 0, now = 0;
    int count = 0;
    while ((now = getchar()) != EOF) {
        if (ischar(now) && !ischar(last))
            count++;
        last = now;
    }
    printf("\nWords Number : %d\n", count);
}


//with the help of boj
//这个代码根本没有用字符数组，而且引入了ischar的函数！
