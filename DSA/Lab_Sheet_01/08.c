#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    int isbn;
    float price;
};

void price_below2000(struct Book books[], int n);
void author_Kernighan(struct Book books[], int n);

int main() {
    struct Book books[10];

    for(int i = 0; i < 10; i++) {

        printf("\nBook %d\n", i + 1);

        printf("Enter Title: ");
        scanf("%s", books[i].title);

        printf("Enter Author: ");
        scanf("%s", books[i].author);

        printf("Enter ISBN: ");
        scanf("%d", &books[i].isbn);

        printf("Enter Price: ");
        scanf("%f", &books[i].price);
    }

    printf("\nBooks below Rs.2000\n");
    price_below2000(books, 10);

    printf("\nBooks written by Kernighan\n");
    author_Kernighan(books, 10);

    return 0;
}

void price_below2000(struct Book books[], int n) {

    for(int i = 0; i < n; i++) {
        if(books[i].price < 2000) {
            printf("%s\n", books[i].title);
        }
    }
}

void author_Kernighan(struct Book books[], int n) {

    for(int i = 0; i < n; i++) {

        if(strcmp(books[i].author, "Kernighan") == 0) {
            printf("Title : %s\n", books[i].title);
            printf("Price : %.2f\n", books[i].price);
        }
    }
}
