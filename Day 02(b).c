Write a C Program to perform all four basic Mathematical Operations on two numbers taken from user input.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    int b;
    
    scanf("%i",&a);
     scanf("%i",&b);
    
    
    printf("%i\n",a+b);
    printf("%i\n",a-b);
    printf("%i\n",a*b);
    printf("%.2f\n",a/((float)b));
        
        
        
        
        
        
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

