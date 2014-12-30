/* fscanf */ /* fprintf */
/* create linked list: head-insert */

#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 64

struct couple *createCPLL(FILE *fp);
int print2file(struct couple *head, FILE *fp);

int main()
{
    FILE *fp;
    struct couple *head;
    
    if ((fp = fopen("input1.txt", "r")) == NULL) {
        printf("Can not open this file input1.txt\n");
        return 0;
    }
    head = createCPLL(fp);
    fclose(fp);
    
    if ((fp = fopen("output1.txt", "w")) == NULL) {
        printf("Can not open this file output1.txt\n");
        return 0;
    }
    print2file(head, fp);
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

/* a function to create linked list: head-insert */
struct couple *createCPLL(FILE *fp)
{
    struct couple *head;
    struct couple *cp;
    int No;
    head = NULL; // initialize last node linking to NULL.
    fscanf(fp, "%d", &No);

    while( No != 0) {
        cp = (struct couple *)malloc(sizeof(struct couple));
        cp->next = head;
        cp->No = No;
        fscanf(fp, "%s", cp->boy_name);
        fscanf(fp, "%s", cp->girl_name);
        head = cp;
        fscanf(fp, "%d", &No);
    }
    return head;
}

/* you need a function to printf your linked list to check */
int print2file(struct couple *head, FILE *fp)
{
    struct couple *cp = head;
    while (cp != NULL) {
        fprintf(fp, "No.%d couple is %s and %s\n", cp->No, cp->boy_name, cp->girl_name);
        cp = cp->next;
    }
    return 0;
}
