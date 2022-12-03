#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(int n){
    unsigned int ui;
    int rem, i = 1;

    while(n != 0){
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i = 10;
    }

    return bin;

}