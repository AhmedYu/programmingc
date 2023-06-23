/*
* Class: ICS 365-50 SUMMAR 2023
* Assignment: Programming Assignment 2
* File name: ics_365_prog_assignment_2.c
* Author: AHMED YUSSUF
*/
  #include <stdio.h>
 
 #include <ctype.h>
// Function prototypes
void intToBinaryConverter_printer(unsigned int* number);
// unsigned int reverseBits(unsigned int number);
unsigned int getNumber();
int main(int argc, char const *argv[]) {
    unsigned int n  =  getNumber();
  

    printf("Before the bits are reversed:\n");
    intToBinaryConverter_printer(&n);

    // unsigned int reversedNumber = reverseBits(n);

    // printf("After the bits are reversed:\n");
    // printf("%u = ", reversedNumber);
    // intToBinaryConverter_printer(&reversedNumber);

    return 0;
}
/***
 * function prompts the user to input an unsigned integer.
 * @param: no prameter.
 * @return : the number recieved through standard in or scanner.
*/
unsigned int getNumber(){
    unsigned int number; //variable to store the number
  
  printf("Enter an unsigned integer: ");
    scanf("%u", &number);
if(isdigit(number) == 0) //if the entery is not a number
    {
      printf("the entry is not a number.\n");

 printf("Do you want to re-enter? (y for yes, n for no): ");
        char ans = 'n';
        scanf("%c", &ans);
         while (getchar() != '\n'); // Clear the input buffer

        if(ans == ('y' | 'Y')){
             while (getchar() != '\n'); // Clear the input buffer

              printf("Enter an unsigned integer: ");
        scanf("%u", &number);
        }

 
    }
    
    return number;
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