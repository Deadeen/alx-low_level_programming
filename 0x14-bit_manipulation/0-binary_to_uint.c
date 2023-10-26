#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
    unsigned int ui;  // Initialize an unsigned integer variable to store the result.
    int len, base_two;  // Declare integer variables for the length and a base factor.

    if (!b)  // Check if the input binary string is NULL.
        return (0);  // Return 0 if the input is NULL.

    ui = 0;  // Initialize the result to 0.

    // Calculate the length of the binary string by counting characters.
    for (len = 0; b[len] != '\0'; len++)
        ;

    // For the binary representation, you'll need a base factor that starts at 1.
    // This factor will be used to calculate the decimal equivalent.

    // Now, let's process the binary string from right to left.
    for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
    {
        if (b[len] != '0' && b[len] != '1')
        {
            return (0);  // If the character is not '0' or '1, return 0 (error).
        }

        if (b[len] & 1)
        {
            ui += base_two;  // If the character is '1', add the corresponding power of 2.
        }
    }

    return (ui);  // Return the calculated unsigned integer.
}
