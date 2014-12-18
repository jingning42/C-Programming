/* learn to use fgets and fputs */
#include <stdio.h>
#include <stdlib.h>

#define SIZE 1024

void filecopy(FILE *fp1, FILE *fp2);

int main(int argc, char *argv[])
{
    FILE *fp1, *fp2;
    if (argc > 1) {
        if((fp1 = fopen(*++argv, "r")) == NULL) {
            printf("can't fopen %s\n", *argv);
            return 0;
        }
        if((fp2 = fopen(*++argv, "w")) == NULL) {
            printf("can't fopen %s\n", *argv);
            return 0;
        }
        filecopy(fp1, fp2);
        fclose(fp1);
        fclose(fp2);
    }
    return 0;
}


void filecopy(FILE *fp1, FILE *fp2)
{
    char str[SIZE];
    while (fgets(str, SIZE, fp1) != NULL)
        fputs(str, fp2);
}
