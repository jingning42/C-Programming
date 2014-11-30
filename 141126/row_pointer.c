#include<stdio.h>

int *seek(int (*grade)[3], int j) {
    int i;
    for (i=0; i<3; i++) {
        if (grade[j][i] < 60)
            return grade[j];
    }
    return NULL;
}

int main() {
    int i;
    int grade[3][3]={{65,65,75},{55,75,85},{75,80,90}};
    int *fail;
    for (i=0; i<3; i++) {
      fail = seek(grade,i);
        if (fail != NULL) {
            printf("Grades of a failed student:\n");
            for (i=0; i<3; i++)
                printf("%d ", fail[i]);
            printf("\n");
            return 0;
        }
    }

    printf("No failed student!\n");
    return 0;
}
