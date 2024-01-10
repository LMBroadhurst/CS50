#include <stdio.h>

void createPyramid(int height);
void printSpaces(int numberOfSpaces);
void printBricks(int numberOfBricks);
void printNewLine(void);

int main(void) {

    int height = 0;
    int numberOfTries = 0;

    do {
        numberOfTries++;

        if (numberOfTries == 5) {
            printf("I'm telling The Singularity where you live.\n");
            printf("You're getting a set of pyramids with a height of 5. Deal with it.\n");
            height = 5;
        } 
        else if (numberOfTries == 3) {
            printf("I'm just a computer. Leave me alone.\n\n");
        }

        printf("Enter a height between 1 and 10: ");
        scanf("%d", &height);

    } while (height <= 0 || height > 10);

    createPyramid(height);

    return 0;
}

void createPyramid(int height) {
    // e.g. input height is 3
    // number of spaces until the first # is therefore 2 (3-1), then 1 (3 - 2), then print the # instantly.

    for (int i = 0; i < height; i++) {
        printSpaces(height - i);
        printBricks(i + 1);
        printSpaces(1);
        printBricks(i + 1);
        printNewLine();
    }
    
}

void printSpaces(int numberOfSpaces) {
    for (int i = 0; i < numberOfSpaces; i++) {
        printf(" ");
    }
}

void printBricks(int numberOfBricks) {
    for (int i = 0; i < numberOfBricks; i++) {
        printf("#");
    }
}

void printNewLine(void) {
    printf("\n");
}