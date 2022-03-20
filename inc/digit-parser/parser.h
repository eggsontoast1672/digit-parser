#pragma once

#include <math.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * Parses the digits of an integer number.
 *
 * @param number The number to be parsed
 * @param digits A pointer to an integer array where the list of digits
 *        is to be stored
 * @param length The length of the output array
 */
void ip_parseDigits(int number, int *digits, size_t length);
