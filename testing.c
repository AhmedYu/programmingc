 /*
* Class: ICS 365-50 SUMMAR 2023
* Assignment: Programming Assignment 2
* File name: ics_365_prog_assignment_2.c
* Author: AHMED YUSSUF
*/
  #include <stdio.h>
 
 
// Function prototypes
unsigned int* intToBinaryConverter(unsigned int* number);
unsigned int getNumber();
    void reverseBinary(unsigned int* binary);
  
//Main function
int main(int argc, char const *argv[]) {
   printf("Enter unsigned integer number:\n");
    unsigned int n  =  getNumber();
  

    printf("Before the bits are reversed:\n");
    printf("\t%i", n);
      printf("\t=\t" );
  unsigned int* binary = intToBinaryConverter(&n);
    
    printf("\nAfter the bits are rversed : \n\t");
    int bitshiftedN = n<<15;
   
        printf("%i\t", bitshiftedN);
        printf("=\t");

 reverseBinary(binary);
 printf("\n");
      
     return 0;
}
/***
 * function prompts the user to input an unsigned integer.
 * @param: no prameter.
 * @return : the number recieved through standard in or scanner.
*/
unsigned int getNumber(){
    unsigned int number; //variable to store the number
    scanf("%u", &number);
 
    
    return number;
}
/**
 * function takes in unsigned integer and converts it to
 * binary before printing it to the console
 * 
*/
unsigned int* intToBinaryConverter(unsigned int* number) {
 
    int temp = *number;
   static unsigned int binaryNumberArray[16] = {0}; // Array to store the binary representation
    int index = 0;
  for (int i = 15; i >=0; i--) {
     printf("%u", binaryNumberArray[i]);
    // Convert the number to binary
    while (temp > 0) {
        binaryNumberArray[index++] = temp % 2;
        temp = temp / 2;
       
 
    }
      
    }
    return binaryNumberArray;
 
   
 
}
 void reverseBinary(unsigned int* binary){
  static unsigned int rB[16] = {0};
   
      for (int i = 0; i < 16; i++) {
        rB[i] =  binary[i];
     
        printf("%u", rB[i]);
    }

 
 } 
