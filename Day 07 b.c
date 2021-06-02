Write a C Program to display a calculator with a menu consisting of each operation to perform on the numbers using Switch Case statement.

  
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    
    scanf("%d\n",&a);
    scanf("%d %d\n",&b,&c);
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    switch (a)
        {case 1:
         printf("%d",b+c);
         break;
        case 2:
         printf("%d",b-c);
         break;   
        case 3:

         printf("%d",b*c);

         break;
         case 4:
          if(b!=0 && c!=0)
          
         printf("%.1f",b/(float)c);
          else 
              printf("Cannot be determined");
         break;}
    

   
    return 0;
}
