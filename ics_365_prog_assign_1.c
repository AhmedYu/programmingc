/*
* Class: ICS 365-50 SUMMAR 2023
* Assignment: Programming Assignment 1
* File name: ics_365_prog_assign_1.c
* Author: AHMED YUSSUF
*   
*/
#include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
// Function declaration
void digitSeparater(int numbers);
int main(){
   // Function declaration
  int checkAnswerOfNumber(int minValue, int maxValue) ;
    int num = checkAnswerOfNumber(1,  32767); //this variable will store the input from the user.
    
   //TODO: if the num is less than 1 or greater than 32767 ask agian 

 printf("You entered  %i\n",  num);

 digitSeparater(num);
  
}
/********************************************************************
 * The function ensures the input fals in between minValue and maxValue 
 * if it does not the cleaint is reminded about the requeirment.
 * if the user choose not to continue he/she enters n then the program terminates
 * otherwise it loops through until the number is in between minvalue and maxValue
 * 
 **********************************************************************/
// Function declaration
int checkAnswerOfNumber(int minValue, int maxValue) {
    int num = 0;
    printf("Enter numbers between %d and %d: ", minValue, maxValue);
    scanf("%i", &num);
    
    if (num < minValue || num > maxValue) {
        char answer = ' ';
        printf("Remember the number should be between %d and %d.\n"
               "Do you want to try again? Enter 'y' for yes, 'n' for no.\t", minValue, maxValue);

        scanf(" %c", &answer);
        if (strcmp(&answer, "y") == 0 || strcmp(&answer, "Y") == 0) {
            printf("Now enter the number: ");
            scanf("%i", &num);
            //loop until th number is in between minvalue and maxvalue
            while (num < minValue || num > maxValue) {
                printf("Invalid number. Please enter a number between %d and %d: ", minValue, maxValue);
                scanf("%i", &num); //accept input from user and store it in num variable.
            }
        }
    }
    
    return num; 
}
  
/*
this function will accept an integer from 1 to 32767
it will print a series of digits with two spaces separating each digit
*/
 void digitSeparater(int numbers) {
    char strNumbers[6]; // Allocate a character array to store the string (including null terminator)
    
    sprintf(strNumbers, "%d", numbers); // Convert the numbers into a string
     
    //using null terminator check the end of string and stop 
    // if you come to it or if the string siz is not greater than i.

    for (int i = 0; i < sizeof(strNumbers) && strNumbers[i] != '\0'; i++) {
        printf("%c  ", strNumbers[i]); //print the each with two spaces a head of it
    }
    
    printf("\n");
}

