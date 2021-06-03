Write a C Program to determine the factorial of a number.


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j, factorial;
    factorial =1;
    scanf("%d", &i);
    if(i<0)
        printf("ERROR");
        else 
        {
            for(j=1;j<=i;j++)
    factorial = factorial * j;
        printf("%d",factorial);
        } 




    
    return 0;
}
