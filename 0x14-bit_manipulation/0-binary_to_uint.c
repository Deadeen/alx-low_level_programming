#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b) {
    if (b == NULL) {
        return 0; // Return 0 if the input string is NULL.
    }

    unsigned int result = 0;
    int i = 0;

    while (b[i] != '\0') {
        // Check if the character is '0' or '1'
        if (b[i] == '0') {
            // Shift the current result left by 1 bit and add 0
            result = (result << 1);
        } else if (b[i] == '1') {
            // Shift the current result left by 1 bit and add 1
            result = (result << 1) | 1;
        } else {
            return 0; // Return 0 if a character is not '0' or '1'.
        }
        i++;
    }

    return result;
}

