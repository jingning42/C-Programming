#include<stdio.h>

void selection_sort(int n, char *pstr[])
{
    int max;
    char *tmp;
    int i,j;
    for (i=0; i<n; i++) {
        max = i;
        for (j=i+1; j<n; j++)
            if (strcmp(pstr[max], pstr[j]) > 0)
                max = j;
        // swap (i, max)
        tmp = pstr[i];
        pstr[i] = pstr[max];
        pstr[max] = tmp;
    }
}

void bubble_sort(int n, char *pstr[])
{
    char *tmp;
    int i,j;
    for (i=0; i<n; i++)
        for (j=i+1; j<n; j++)
            if (strcmp(pstr[i], pstr[j]) > 0) {
                tmp = pstr[i];
                pstr[i] = pstr[j];
                pstr[j] = tmp;
            }
}

int main() {
    int i;
    char *pstr[5];
    char *tosort[5];

    pstr[1] = "1111";
    pstr[0] = "1222";
    pstr[3] = "1233";
    pstr[4] = "44444";
    pstr[2] = "55";

    for (i=0; i<5; i++)
        tosort[i] = pstr[i];
    selection_sort(5, tosort);
    printf("Selection sort result:\n");
    for (i=0; i<5; i++)
        printf("%s\n", tosort[i]);

    for (i=0; i<5; i++)
        tosort[i] = pstr[i];
    bubble_sort(5, tosort);
    printf("Bubble sort result:\n");
    for (i=0; i<5; i++)
        printf("%s\n", tosort[i]);

    return 0;
}
