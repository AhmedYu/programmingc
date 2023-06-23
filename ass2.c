#include <stdio.h>

// Function prototypes
void intToBinaryConverter_printer(unsigned int* number);
unsigned int reverseBits(unsigned int number);

int main(int argc, char const *argv[]) {
    unsigned int n;
    printf("Enter an unsigned integer: ");
    scanf("%u", &n);

    printf("Before the bits are reversed:\n");
    intToBinaryConverter_printer(&n);

    unsigned int reversedNumber = reverseBits(n);

    printf("After the bits are reversed:\n");
    printf("%u = ", reversedNumber);
    intToBinaryConverter_printer(&reversedNumber);

    return 0;
}

void intToBinaryConverter_printer(unsigned int* number) {
    printf("\t\t%u =", *number);
    int temp = *number;
    unsigned int binary[16] = {0}; // Array to store the binary representation
    int index = 0;

    // Convert the number to binary
    while (temp > 0) {
        binary[index++] = temp % 2;
        temp = temp / 2;
    }

    for (int i = 15; i >= 0; i--) {
        printf("%u", binary[i]);
    }

    printf("\n");
}

unsigned int reverseBits(unsigned int number) {
    unsigned int reversedNumber = 0;

    // Reverse the bits
    for (int i = 0; i < 16; i++) {
        reversedNumber <<= 1; // Shift the reversed number to the left
        reversedNumber |= (number & 1); // Set the least significant bit of reversed number with the corresponding bit from the original number
        number >>= 1; // Shift the original number to the right
    }

    return reversedNumber;
}
