/* create linked list: tail-insert */

#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 64

struct couple *createCPLL(void);
int printCPLL(struct couple *head);
struct couple *deleteCPLL(struct couple *head, int No);


int main()
{
    int No;
    struct couple *CPLL = createCPLL();
    printCPLL(CPLL);
    
    printf("\n**** DELETE ****\n");
    printf("Please input a No you want to delete, enter 0 to quit: ");
    scanf("%d", &No);
    while (No != 0) {
        CPLL = deleteCPLL(CPLL, No);
        printCPLL(CPLL);
        printf("Please input a No you want to delete, enter 0 to quit: ");
        scanf("%d", &No);
    }
    printf("\n****DONE****\n");
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
struct couple *createCPLL(void)
{
    struct couple *head;
    struct couple *oldcp;
    struct couple *newcp;
    int No;
    int i = 0;
    head = NULL; // initialize last node linking to NULL.
    printf("**** CREATE ****\n");
    printf("Please input Number of a couple, enter 0 to exit: ");
    scanf("%d", &No);

    while( No != 0) {
        newcp = (struct couple *)malloc(sizeof(struct couple));
        newcp->No = No;
        printf("Boy's name: ");
        scanf("%s", newcp->boy_name);
        printf("Girl's name: ");
        scanf("%s", newcp->girl_name);
        ;
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
int printCPLL(struct couple *head)
{
    struct couple *cp = head;
    while (cp != NULL) {
        printf("No.%d couple is %s and %s\n", cp->No, cp->boy_name, cp->girl_name);
        cp = cp->next;
    }
    return 0;
}

/* assume cp->No was sort from small to large */
struct couple *deleteCPLL(struct couple *head, int No)
{
    struct couple *pnow = head;
    struct couple *pnext;
    char x;
    
    if (head == NULL) {
        printf("Warning: This is a empty linked list.\n"
               "You have nothing to delete!\n");
        return head;
    }  
    /* delete the first node */
    if (head->No == No) {
        head = head->next;
        free(pnow);
        return head;
    }
    
    /* when didn't fine */
    while (pnow->next != NULL && pnow->next->No != No)
        pnow = pnow->next;

    /* find the node and delete */
    if (pnow->next != NULL) {
        pnext = pnow->next->next;
        free(pnow->next);
        pnow->next = pnext;
    }
    /* can't find */
    else
        printf("Can not find the node you want to delete!\n");
    return head;
        
}
