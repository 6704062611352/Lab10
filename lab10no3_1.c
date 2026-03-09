#include <stdio.h> 
#include <stdlib.h> 

struct Books { 
    int BookID; 
    char BookTitle[50]; 
} ComputerBook; 

void DisplayData(struct Books CBook); 

int main() { 
    printf("Enter Book ID :");      
    scanf("%d", &ComputerBook.BookID); 
    
    printf("Enter Book Title :");   
    scanf("%s", ComputerBook.BookTitle); 
    
    DisplayData(ComputerBook); 
    return 0; 
} 
void DisplayData(struct Books CBook) { 
    printf("Book ID : %d \n", CBook.BookID); 
    printf("Book Title : %s \n", CBook.BookTitle); 
}
/*
void DisplayData(struct Books CBook) is: An output function defined to receive a structure of type struct Books

to process and display its internal members within the function.

Parameters received: It uses Pass by Value, meaning the program creates a complete copy

of the data from the ComputerBook variable in the main function

and stores it in a new local variable named CBook inside the DisplayData function.

As a result: Any modifications made to CBook (if any)

will not affect the original data in main.
*/