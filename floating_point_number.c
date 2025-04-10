#include <stdio.h>
int main()
{
    // get value from user
    float x ;
    scanf("%f\n", &x);

    // print the value with 3 step after decimal point
    printf("%.3f", x); 
    return 0;
}