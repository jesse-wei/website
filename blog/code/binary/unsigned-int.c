#include <stdio.h>

int main() {
    unsigned int int_max = 0xFFFFFFFF; // F == 1111 == 15 in base-10
    // hence 0xFFFFFFFF is 32 binary bits, all 1's
    printf("%u\n", int_max);
    printf("%u\n", int_max + 1);
}