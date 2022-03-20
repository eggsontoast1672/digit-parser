#include <stdio.h>

#include "digit-parser/parser.h"

#define DIGITS_SIZE     64
#define NUMBERS_SIZE    4

static int digits[DIGITS_SIZE];

static int numbers[NUMBERS_SIZE] = {
    1, 0, 234, 62456
};

void print_digits(int *digits, size_t length) {
    size_t i;

    printf("BEGIN DIGITS\n");
    for (i = 0; i < length; ++i) {
        printf("%d\n", digits[i]);
    }
    printf("END DIGITS\n");
}

int main() {
    int i;

    for (i = 0; i < NUMBERS_SIZE; ++i) {
        ip_parseDigits(numbers[i], digits, DIGITS_SIZE);
        print_digits(digits, DIGITS_SIZE);
    }
}
