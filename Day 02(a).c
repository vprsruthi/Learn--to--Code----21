Write a C Program to read an integer and find it's square root.



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a ;
    float root ; 
    
    scanf("%i",&a);
    root=sqrt (a);
    printf("%.1f",root);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
