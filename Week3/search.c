#include <stdio.h>
#include <string.h>

int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    // Get input from user
    int inputInt = 1;

    for (int i = 1; i < 7; i++)  {

        if (numbers[i] == inputInt) 
        {
            printf("Found\n");
            return 0;
        }

    }

    printf("Not Found\n");

    // Get input from user
    // How to do an array of char[]
    [] inputString[4] = {"Hello", "World", "Goodbye", "Greetings"};

    for (int i = 1; i < 7; i++)  {

        if (numbers[i] == inputInt) 
        {
            printf("Found\n");
            return 0;
        }

    }

    printf("Not Found\n");
}