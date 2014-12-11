/* create linked list: head-insert */

#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 64

struct couple *createCPLL(void);
int printCPLL(struct couple *head);
struct couple *insertCPLL(struct couple *head, int No);


int main()
{
    int No;
    struct couple *CPLL = createCPLL();
    printCPLL(CPLL);
    printf("\n**** INSERT ****\n");
    printf("Please input Number of a couple, enter 0 to exit: ");
    scanf("%d", &No);
    while (No != 0) {
        CPLL = insertCPLL(CPLL, No);
        printf("Please input Number of a couple, enter 0 to exit: ");
        scanf("%d", &No);
    }
    printCPLL(CPLL);    
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
struct couple *createCPLL(void)
{
    struct couple *head;
    struct couple *cp;
    int No;
    head = NULL; // initialize last node linking to NULL.
    printf("\nPlease input Number of a couple, enter 0 to exit: ");
    scanf("%d", &No);

    while( No != 0) {
        cp = (struct couple *)malloc(sizeof(struct couple));
        cp->next = head;
        cp->No = No;
        printf("Boy's name: ");
        scanf("%s", cp->boy_name);
        printf("Girl's name: ");
        scanf("%s", cp->girl_name);
        head = cp;
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
struct couple *insertCPLL(struct couple *head, int No)
{
    struct couple *cp = head;
    struct couple *pnew;
    pnew = (struct couple *)malloc(sizeof(struct couple));
    // 第一次居然非常蠢的忘记 malloc 给 pnew 分配内存啦
    
    /* create a new node */ 
    pnew->No = No;
    printf("Boy's name: ");
    scanf("%s", pnew->boy_name);
    printf("Girl's name: ");
    scanf("%s", pnew->girl_name);
    pnew->next = NULL;

    /* find the right position to insert */
    
    // if CPLL is a NULL linked list
    if (head == NULL) 
        return pnew;
    
    // if a new node should be inserted in front of head
    if (head->No > pnew->No) { 
        pnew->next = head;
        return pnew;   
    }
        
    while (cp->next != NULL) {
        if (pnew->No < cp->next->No) {
            pnew->next = cp->next;
            cp->next = pnew;
            return head;
        }
        else
            cp = cp->next;
    }

    // if a new node should be inserted at the end
    cp->next = pnew;
    return head;
}
