/*
* Class: ICS 365-50 SUMMAR 2023
* Assignment: Programming Assignment 2
* File name: ics_365_prog_assignment_2.c
* Author: AHMED YUSSUF
*/
#include<stdio.h>
//FUNCTION PROTOTYPE
unsigned getInput();
void  convertToBinary(unsigned num);
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
//TODO:-function that converts the number into binary
void convertToBinary(unsigned n){
    if(n == 0) return 0; //if the number provided is zero
    if(n == 1) return 1; //if the number provided is 1 return 1

int binaryArray[32]; // 32 binary
    int i = 0; //index
  //while the number is greater zero keep converting the number by using modulo and 
    while (n > 0) {
        binaryArray[i] = n % 2;
        n = n / 2;
        i++;
    }
   int j = sizeof(binaryArray);

printf("the numebr you enter is : %i" , n);
printf("\t = ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryArray[j]);
    }
    
}
 