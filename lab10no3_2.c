#include <stdio.h> 
#include <stdlib.h> 

struct Books { 
    int BookID; 
    char BookTitle[50]; 
} ComputerBook; 

void DisplayData(struct Books *CBook); 

int main() { 
    printf("Enter Book ID :");      
    scanf("%d", &ComputerBook.BookID); 
    
    printf("Enter Book Title :");   
    scanf("%s", ComputerBook.BookTitle); 
    
    DisplayData(&ComputerBook); 
    
    return 0; 
} 

void DisplayData(struct Books *CBook) { 
    printf("Book ID : %d \n", (*CBook).BookID); 
    printf("Book Title : %s \n", CBook->BookTitle); 
}

/*
*(CBook).BookID is: The process of accessing a member using the dereference operator (*)

to "decode" the memory address stored in CBook into a regular variable first,

followed by the dot operator (.) to access the BookID member.

(Parentheses are required because the dot operator has a higher precedence than the dereference operator).

CBook->BookTitle is: The process of accessing a member using the Arrow Operator,

which is a shorter and more popular method for pointers.

The -> operator performs both dereferencing the memory address

and accessing the BookTitle member in a single step.
*/