/*
* Class: ICS 365-50 SUMMAR 2023
* Assignment: Programming Assignment 2
* File name: ics_365_prog_assignment_2.c
* Author: AHMED YUSSUF
*/
#include<stdio.h>
 //function prototype
unsigned int getInput(); 
//function prototype
unsigned int*  convertToBinary(unsigned int number);
 //function prototype
// void printBinaryArray(unsigned int* binaryArray);
 //function prototype
// void reverseBinary(unsigned int* binaryArray, int size);

int main() {
    unsigned int number = getInput();
  
 

    printf("Before bits are reversed:\n");
    printf("\t%u = ", number);
     
  

   

    return 0;
}

unsigned int getInput() {
    unsigned int num;
    printf("Enter unsigned integer number: ");
    scanf("%u", &num);
    return num;
}

unsigned int *  convertToBinary(unsigned int number) {
    static  unsigned int binaryArray[32];

    for (int i = 31; i >= 0; i--) {
        int bit = (number >> i) & 1;
     printf("%u", bit);
    }
return binaryArray;
    
}

 
  void printBinaryArray(unsigned int* binaryArray) {
    for (int i = 31; i >= 0; i--) {
        printf("%u", binaryArray[i]);
    }
    printf("\n");
}
