/* fwrite */ /* fread */
/* create linked list: tail-insert */

#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 64

struct couple *createCPLL(FILE *fp);
int file2print(FILE *fp);

int i; // waring!!

int main()
{
    FILE *fp;
    i = 0;
    
    if ((fp = fopen("couple2.out", "w")) == NULL) {
        printf("Can not open this file couple2.txt\n");
        return 0;
    }
    createCPLL(fp);
    fclose(fp);
    
    if ((fp = fopen("couple2.out", "r")) == NULL) {
        printf("Can not open this file couple2.txt\n");
        return 0;
    }
    file2print(fp);
    fclose(fp);
    
    return 0;
}

/* declare a struct */
struct couple
{
    int No;
    char boy_name[NAME_LEN];
    char girl_name[NAME_LEN];
    struct couple *next;
};

/* a function to create linked list: tail-insert */
struct couple *createCPLL(FILE *fp)
{
    struct couple *head;
    struct couple *oldcp;
    struct couple *newcp;
    int No;
    head = NULL; // initialize last node linking to NULL.
    printf("Please input Number of a couple, enter 0 to exit: ");
    scanf("%d", &No);

    while( No != 0) {
        newcp = (struct couple *)malloc(sizeof(struct couple));
        newcp->No = No;
        printf("Boy's name: ");
        scanf("%s", newcp->boy_name);
        printf("Girl's name: ");
        scanf("%s", newcp->girl_name);
        fwrite(newcp, sizeof(struct couple), 1, fp);
        
        if (i++ == 0) {     // at the beginning, it's a bit unique
            head = newcp;   // mark the first note
            oldcp = newcp;
        }
        else {   
            oldcp->next = newcp;  // if a new couple's info was enrolled
            oldcp = newcp;        // they become the old one
        }
        
        printf("Please input Number of a couple, enter 0 to exit: ");
        scanf("%d", &No);
    }
    return head;
}

/* you need a function to printf your linked list to check */
int file2print(FILE *fp)
{
    int j;
    struct couple cp[i];
    for (j = 0; j < i; j++) {
        fread(&cp[i], sizeof(struct couple), 1, fp);
        printf("No.%d couple is %s and %s\n", cp[j].No, cp[j].boy_name, cp[j].girl_name);
    }
    return 0;
}

