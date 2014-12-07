/* create linked list: tail-insert */

#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 64

struct couple *createCPLL(void);
int printCPLL(struct couple *head);

int main()
{
    printCPLL(createCPLL());
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
    printf("Please input Number of a couple, enter 0 to exit: ");
    scanf("%d", &No);

    while( No != 0) {
        newcp = (struct couple *)malloc(sizeof(struct couple));
        newcp->No = No;
        printf("Boy's name: ");
        scanf("%s", newcp->boy_name);
        printf("Girl's name: ");
        scanf("%s", newcp->girl_name);
        
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

