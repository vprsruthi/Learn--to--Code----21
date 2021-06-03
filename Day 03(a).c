#include <stdio.h>
Write a C Program to determine the area of a square, circle and a triangle taking length, radius and base and height respectively from user input.
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d",&a);
    printf("%d\n",a*a);
    
    
    
    
    int r ;
   
    float pi =3.14;
    scanf("%i",&r);
    printf("%.1f\n",pi*r*r);
    
    
    
    int b;
    int h;
    float half =0.5;
    scanf("%d",&b);
    scanf("%d",&h);
    printf("%.2f\n",half*b*h);
    
    
    
    
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
