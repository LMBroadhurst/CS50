#include <stdio.h>

int main(void) { 
    // printf("Hello World!\n"); 

    char myChar[1024];

    printf("Type your name and press enter: \n");

    scanf("%c", &myChar);

    printf("Your character is: %c\n", myChar);
}

// Compile c file
// gcc hello.c -o hello
// Compiles to executable file named hello, run this for output