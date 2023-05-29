/*
* Class: ICS 365-50 SUMMAR 2023
* Assignment: Programming Assignment 1
* File name: ics_365_prog_assign_1.c
* Author: 
*   
*/
#include<stdio.h>
#include<string.h>
// Function declaration
// void digitSeparater(int numbers);
int main(){
   // Function declaration
  int checkAnswerOfNumber();
    int num = checkAnswerOfNumber(); //this variable will store the input from the user.
    
   //TODO: if the num is less than 1 or greater than 32767 ask agian 

 printf("You entered , %i",  num);
//  digitSeparater(32767);
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
            while (num < minValue || num > maxValue) {
                printf("Invalid number. Please enter a number between %d and %d: ", minValue, maxValue);
                scanf("%i", &num);
            }
        }
    }
    
    return num;
}
  
/*
this function will accept an integer from 1 to 32767
it will print a series of digits with two spaces separating each digit
*/
// void digitSeparater(int numbers){
 
//     if(numbers <= 32767){
// char numbersArray[] = {numbers};
//  printf("%s",  * numbersArray);
//  for(int i = 0 ; i < 5; i++){
// // printf("%c",  numbersArray[i]  );
// // printf("\t");
//  }
//     }
    
// }