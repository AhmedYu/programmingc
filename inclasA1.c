// #include <stdio.h>
// #include <math.h>
// /**
//  * Class: ICS 365-50 SUMMAR 2023
//  * Assignment: Inclass Assignment
//  *  Author: Caleb Davis ,Ahmed Yussuf, Dara Phay,Methew Sly,Kevin Trinh
// */

// //function prototype
// double hypotenuse(double side1, double side2);
// int main() {
//     double side1 = 3.0; // Assign the value for side 1
//     double side2 = 4.0; // Assign the value for side 2
    
//     double result = hypotenuse(side1, side2); // Call the hypotenuse function
    
//     printf("The length of the hypotenuse is: %.2f\n", result); // Display the length of the hypotenuse
    
//     return 0;
// }
// /*
// this function finds the hypotenuse given the two sides */
// double hypotenuse(double side1, double side2) {
//     double hypotenuse = sqrt(side1 * side1 + side2 * side2);
//     return hypotenuse;
// }

 
#include <stdio.h>

// Square function prototype
int Square(int y);

int main(void) {
    for (int x = 1; x <= 10; ++x) {
        printf("%d ", Square(x));
    }
}

// Function definition
int Square(int y) {
    return y * y;
}