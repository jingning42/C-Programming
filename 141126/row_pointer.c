#include<stdio.h>

int *seek(int grade[]) {
    int i;
    for (i=0; i<3; i++) {
        if (grade[i] < 60)
            return grade;
    }
    return NULL;
}

int main() {
    int i;
    int grade[3][3]={{55,65,75},{65,75,85},{75,80,90}};
    int *fail;
    for (i=0; i<3; i++) {
        fail = seek(grade[i]);
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
