/************************
 * 测试卷四　第四题　2
 * 文本中特定单词个数统计
 ************************/

#include <stdio.h>
#include <string.h>

char *udf_gets(char *word);
int udf_strlen(char *word);
int udf_strcmp(char *s, char *t);


int main()
{
    int i = 0, sum = 0, length;
    char word[20]; // 这里并没有初始化,故后面的函数要注意word清零.
    char text[] = "We wish you merry Christmas,\nwe wish you merry Christmas,\nwe wish you merry Christmas,\nand happy new year!\n";
    char temp[20] = {0};
    printf("Please input the word which you want to count: \n");
    udf_gets(word);
    length = udf_strlen(word);

    while(length != 0 && text[i] != '\0') {
        strncpy(temp, text+i, length);
        if (udf_strcmp(word, temp) == 0) {
            sum++;
            i += length;
        }
        i++;
    }
    printf("The word \"%s\" appears %d times in the text.\n", word, sum);           
    return 0;
}

char *udf_gets(char *word)
{
    char *word2 = word, ch;
    if ((ch = getchar()) == EOF) // EOF
        return NULL;
    do {
        *word2++ = ch;
        } while ((ch = getchar())!='\n');
    *word2 = '\0';
    return word;
}


int udf_strlen(char *word)
{
    int count;
    if (word == NULL) // NULL
        return 0;
    
    for (count=0; word[count]!='\0'; count++);
    return count;
}

int udf_strcmp(char *s, char *t)
{
    while( *s == *t) {
        if (*s == '\0')
            return 0;
        s++;
        t++;
    }   
    return *s - *t;
}
