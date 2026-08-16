#include <stdio.h>
#include <string.h>

struct Book 
{
    char  title  [30] ;
    char  author [20] ;
    float price       ;
};
struct Book compareBookPrice(struct Book books[],int lengthOfBooksArr)
{
    struct Book mostExpensiveBook;
    mostExpensiveBook = books[0];

    for(int i=1;i<lengthOfBooksArr;i++)
    {
        if(books[i].price > mostExpensiveBook.price)
            mostExpensiveBook = books[i];
    }
    return mostExpensiveBook;
}


int main()
{

    struct Book book1;
    struct Book book2;
    struct Book book3; 


    strcpy(book1.title,"Harry Potter And The Philosopher's Stone");
    strcpy(book1.author,"JK Rowling");
    book1.price = 200.12;

    strcpy(book2.title,"Lord of The Rings");
    strcpy(book2.author,"JRR Tolkein");
    book2.price = 132.34;
    
    strcpy(book3.title,"When The Mountains Echoed");
    strcpy(book3.author,"Khalid Hosseni");
    book3.price = 332.21; 

    struct Book books[]={book1,book2,book3};
    int lengthOfBooksArr = (sizeof books / sizeof books[0]);
    struct Book mostExpensiveBook = compareBookPrice(books,lengthOfBooksArr);

    printf("The Most Expensive book is %s , with a price of %f",mostExpensiveBook.title,mostExpensiveBook.price);


}