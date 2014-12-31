#include <stdio.h>

#define MAX 32
#define N 5

struct book {
    int id;
    char name[MAX];
    char author[MAX];
    char press[MAX];
    double price;
};

int main()
{
    int i;
    double sum = 0;
    struct book bk[N];
    for (i=0; i<N; i++) {
        do {
            printf("id: ");
            scanf("%d", &bk[i].id);
        }
        while (bk[i].id < 0);
        printf("name: ");
        scanf("%s", bk[i].name);
        printf("author: ");
        scanf("%s", bk[i].author);
        printf("press: ");
        scanf("%s", bk[i].press);
        do {
            printf("price: ");
            scanf("%lf", &bk[i].price);
        }
        while (bk[i].price < 0);
    }
    for (i=0; i<N; i++) 
        sum += bk[i].price;

    printf("average price of these books is: %lf\n", sum/N);
    return 0;
}


    
    
    
