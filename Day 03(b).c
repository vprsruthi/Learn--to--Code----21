Write a C Program to convert Fahrenheit to Celsius.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float f;
    
    scanf("%f",&f);
    
    printf("%.2f",((f-32)*0.555555555));

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
