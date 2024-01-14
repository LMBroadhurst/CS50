#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

// Amex = 15 digits. Start with 34 or 37.
// MasterCard = 16 digits. Start with 51-55.
// Visa = 13/16 digits. Start with 4.
// All have an integrated checksum. Luhns Algorithm.
//  - Multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products’ digits together.
//  - Add the sum to the sum of the digits that weren’t multiplied by 2.
//  - If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid!

// Prototypes for compiler.
int convertCardNumberToIntArray(int cardNumber);
bool checksum(int cardNumber);

int main(void) {

    int cardNumber = 0;
    int inputLength = 0;
    bool validInput = false;

    do {
        printf("Please enter a valid Amex, MasterCard, or Visa card number: ");
        scanf("%d", &cardNumber);

        inputLength = convertCardNumberToIntArray(cardNumber);

    }
    while (validInput == false);

    return 0;
}

bool checksum(int cardNumber) {

    return false;
}

int convertCardNumberToIntArray(int cardNumber) {

    int cardNumberParam = cardNumber;
    int length = 0;

    if (cardNumber == 0) {
        return 1;
    }
    
    while (cardNumber != 0) {
        cardNumber /= 10;
        ++length;
    }

    int cardNumberArray[length];

    for (int i = length - 1; i >= 0; --i) {
        cardNumberArray[i] = cardNumberParam % 10;
        cardNumberParam /= 10;
    }

    for (int i = 0; i < length; ++i) {
        if (i % 2 == 0) {
            cardNumberArray[i] *= 2;
        }
    }

    printf("Individual digits: ");
    for (int i = 0; i < length; ++i) {
        printf("%d ", cardNumberArray[i]);
    }

    return length;
}