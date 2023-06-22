#include<stdio.h>
int main(int argc, char const *argv[])
{int myarray[5] = {23,42,45,23,12};
// printf("the size of the array is : %lu", sizeof(myarray));
    /* code */
    int n = 9;
    int r;
    int q = n;
unsigned int arrB[32];
for(int i = 0; i < 32; i++){
 while(q>1){
    q = n / 2;
    r = n % 2;

  

    arrB[i] = r;
 

  n = q;
  }
  printf("%u",  arrB[i]);
     if(q == 1){
            arrB[i] = q;
        break;
    }
 

  
}

 
 
//  for(int i = 0; i<  5; i++){

//     printf("%u\n", arrB[i]);
//  }
 
    return 0;
}
