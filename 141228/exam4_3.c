/**********************************
 * 测试卷四　第四题　3
 * 尾插法建立链表, 把链表输出到文件中
 ***********************************/

#include <stdio.h>
#include <stdlib.h>

struct person {
    int no;
    float salary;
    struct person *next;
};

struct person *CreateListR(void);
void writeListR(struct person *head);

int main()
{
    struct person *head;
    
    head = CreateListR();
    writeListR(head);
    return 0;
}

struct person *CreateListR(void)
{
    struct person *head, *p1, *p2;
    int no;
    head = NULL;
    printf("Please input a worker's number: ");
    scanf("%d", &no);
    
    while (no != 0) {
        p1 = (struct person *)malloc(sizeof(struct person));
        p1->no = no;
        printf("Please input a worker's salary: ");
        scanf("%f", &p1->salary);
        p1->next = NULL;
        if (head == NULL)
            head = p2 = p1;
        else {
            p2->next = p1;
            p2 = p1;
        }
        printf("Please input a worker's number: ");
        scanf("%d", &no);
    }
    return head;
}


void writeListR(struct person *head)
{
    struct person *p = head;
    FILE *fp;
    if ((fp = fopen("person_list.txt", "w")) == NULL)
        printf("Can't open this file!\n");
    else
        while (p != NULL) {
            fprintf(fp, "no = %d, salary = %0.2f\n", p->no, p->salary);
            p = p->next;
        }
    fclose(fp);
}
