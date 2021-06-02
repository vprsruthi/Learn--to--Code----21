WACP to determine if a triangle is valid from the given sides.
  
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() { 
    int a,b,c;
    scanf("%d %d %d\n", &a,&b,&c);
    if ((a+b)>c && (a+c)>b && (b+c)>a)
        printf("Yes");
    else 
        printf("No");

      
    return 0;
}
