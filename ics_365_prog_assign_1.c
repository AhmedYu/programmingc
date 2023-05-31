/*
* Class: ICS 365-50 SUMMAR 2023
* Assignment: Programming Assignment 1
* File name: ics_365_prog_assign_1.c
* Author: AHMED YUSSUF
*/
#include<stdio.h>
 #include<string.h>
 #include<stdlib.h>
 #include<math.h>
//function prototype
void digitSeparater(int numbers);
//function prototype
int divide(int dividend, int divisor);
//function prototype
int reminder(int dividend, int divisor);
//function prototype
  int checkAnswerOfNumber(int minValue, int maxValue) ;  
int main(){
    int num = checkAnswerOfNumber(1,  32767); //this variable will store the input from the user.
    int divisor  = 8;
    int dividend = 1424;
    printf( "%d", reminder(dividend,divisor)); //print reminder
    printf("\n%i ", divide(dividend,divisor));
    digitSeparater(num);
}
/********************************************************************
 * The function ensures the input fals in between minValue and maxValue 
 * if it does not the cleaint is reminded about the requeirment.
 * if the user choose not to continue he/she enters n then the program terminates
 * otherwise it loops through until the number is in between minvalue and maxValue
 **********************************************************************/
 
int checkAnswerOfNumber(int minValue, int maxValue) {
    int num = 0;
    printf("Enter numbers between %d and %d: ", minValue, maxValue);
    scanf("%i", &num);
    
    if (num < minValue || num > maxValue) {
        char answer = ' ';
        printf("Remember the number should be between %d and %d.\n"
        "Do you want to try again? Enter 'y' for yes, 'n' for no.\t", minValue, maxValue);
        scanf(" %c", &answer); //get the answer from the user whether y or n to continue excution.
        if (strcmp(&answer, "y") == 0 || strcmp(&answer, "Y") == 0) {
       
            printf("Now enter the number: "); //prompt the user to enter the number again.
            scanf("%i", &num); //get the numeber from the user.
            //loop until th number is in between minvalue and maxvalue
            while (num < minValue || num > maxValue) { //continue asking if the number is not meeting the requirement

                //print invalid and remind the requirements
                printf("Invalid number. Please enter a number between %d and %d: ", minValue, maxValue);
                scanf("%i", &num); //accept input from user and store it in num variable.
            }
        }
    }
    
    return num; 
}
  
/*******************************************************
 *  this function will accept an integer from 1 to 32767
 * it will print a series of digits with two spaces separating each digit
 * @param numbers : integer  numbers entered by the user that should be checked
 * @return : void
**********************************************************/
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
 /**********************************************************
  * the function divides two numbers and returns the result
  * @param: dividend is the number to be divided
  * @param : divisor is the divisor or the number that divides
  * @return : the function returns quotient or the result as an integer
 ***********************************************************/
int divide(int dividend, int divisor) {
    return dividend / divisor;
    }
 /***
  * reminder function uses modulo to divide two numbers and send the reminder after the division.
  * @param numberTbeDivided : the number to be divided 
  * @param divisor : the number that will do the division
  * @return : reminder of the two numbers after the divison.
 */
int reminder(int dividend, int divisor){
    return   dividend % divisor;
}