#include <stdio.h>

void functionForFun(void);
void functionForNotFun(void);

void main(void) { 
    
    int integer;
    printf("Enter a number less than 100: ");
    scanf("%d", &integer);
    printf("You entered: %d\n", integer);

    if (integer > 100) {
        printf("Think you're funny, huh...\n");
        functionForFun();
    } else {
        printf("Good job, you followed the instructions. Have a cookie (in your browser).\n");
    }

    const int someConstant = 100;

    int numberOfTries = 0;
    do 
    {
        printf("Enter a smaller than 5: ");
        scanf("%d", &integer);
        numberOfTries++;

        if (numberOfTries > 2) {
            printf("Give it a rest.");
            integer = 5;
        }
    }
    while (integer > 5);
}

void functionForFun(void) {
    printf("This is a function\n");
}

void functionForNotFun(void) {
    printf("This is not a function\n");
}

// Compile c file
// gcc hello.c -o hello
// Compiles to executable file named hello, run this for output