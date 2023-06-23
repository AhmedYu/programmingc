#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n = 1 <<15;
    printf("%i\t", n);
        printf("%i", n>>15);
    return 0;
}
