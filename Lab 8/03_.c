/*3. Declare a structure  book  to store details of a book (title, author, price). Write a
program to create an array of 'n' books, where 'n' is provided by the user. Prompt the
user to enter details for each book and display them back.*/

#include <stdio.h>

// Define the structure "Book"
struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    int n; // Number of books
    printf("Enter the number of books: ");
    scanf("%d", &n);

    // Declare an array of 'n' books
    struct Book books[n];

    // Input details for each book
    for (int i = 0; i < n; ++i) {
        printf("\nEnter details for Book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", books[i].title); // Assuming titles do not contain spaces
        printf("Author: ");
        scanf("%s", books[i].author); // Assuming authors do not contain spaces
        printf("Price: ");
        scanf("%f", &books[i].price);
    }

    // Display details of all books
    printf("\nDetails of all books:\n");
    for (int i = 0; i < n; ++i) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n", books[i].price);
    }

    return 0;
}




