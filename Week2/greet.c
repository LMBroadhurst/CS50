#include <stdio.h>

int main(int argc, int argv[]) {

    if (argc != 2) {
        printf("Passed... \n");

        for (int i = 0; i < argc; i++) {
            printf("hello, %d\n", argv[i]);
        }
    }
    else {
        printf("Failed... \n");
    }
}