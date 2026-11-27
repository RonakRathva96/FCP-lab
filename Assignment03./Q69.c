
#include <stdio.h>

struct book
{
    char name[50];
    char author[50];
    float price;
};

void read(struct book *b)
{
    printf("Enter Book Name ");
    scanf(" %[^\n]", (*b).name);

    printf("Enter Author Name ");
    scanf(" %[^\n]", (*b).author);

    printf("Enter Book Price ");
    scanf("%f", &(*b).price);
}

void display(struct book *b)
{
    printf("Book Information\n");
    printf("Book Name: %s\n", (*b).name);
    printf("Author Name: %s\n", (*b).author);
    printf("Book Price: %.2f\n", (*b).price);
}

int main()
{
    struct book b;

    read(&b);
    display(&b);

    return 0;
}
