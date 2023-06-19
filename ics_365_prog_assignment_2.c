/*
* Class: ICS 365-50 SUMMAR 2023
* Assignment: Programming Assignment 2
* File name: ics_365_prog_assignment_2.c
* Author: AHMED YUSSUF
*/
#include<stdio.h>
//FUNCTION PROTOTYPE
unsigned getInput();
 
int main(int argc, char const *argv[])
{
    printf("testing");
    printf("the number you enter is :%i", getInput());
    printf("\n");
 
  printf("\n%i", 1 % 2);
    /* code */
    return 0;
}
//TODO:-  function that accespts input from the user
unsigned getInput(){
    unsigned num ;
    printf("Enter unsigned integer number : ");
    scanf("%i", &num);
    return num;
}
 
 
 
//  # Prompt the user to enter an unsigned int value.

// # Store the input value.
// # Create the function reverseBits that takes the input value as a parameter.
// # Convert the input value into its binary representation.
// # Reverse the order of the bits in the binary representation.
// # Convert the reversed binary representation back into an unsigned int value.
// # Print the original value and its binary representation before the bits are reversed.
// # Call the reverseBits function with the stored value as an argument.
// # Print the reversed value and its binary representation after the bits are reversed.
