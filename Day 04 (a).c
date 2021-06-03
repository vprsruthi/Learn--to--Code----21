Write a C Program to verify if a given year is a leap year or no




#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {int a;
            scanf("%d",&a);
            if(a%400==0)
                printf("Yes");
            else if(a%4==0 && a%100!=0)
                printf("Yes");
            else
                printf("No");
    
            

   
    return 0;
}
