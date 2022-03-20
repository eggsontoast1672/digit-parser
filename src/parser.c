#include "digit-parser/parser.h"

typedef struct {
    int first;
    int remaining;
} ip_numberData;

static ip_numberData ip_getFirstDigit(int number) {
    double a, b;
    ip_numberData result;

    a = abs(number) * 0.1;
    result.remaining = floor(a);
    b = a - result.remaining;
    result.first = b * 10;

    return result;
}

void ip_parseDigits(int number, int *digits, size_t length) {
    size_t i;
    ip_numberData current_data;

    for (i = 0; i < length; ++i) {
        if (current_data.remaining == 0) {
            return;
        }

        current_data = ip_getFirstDigit(number);
        digits[i] = current_data.first;
    }
}
