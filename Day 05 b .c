In a sequence of numbers from 1 - 100, replace the numbers divisble by 3 with "FIZZ", replace the numbers divisble by 5 with "BUZZ" and replace the numbers divisble by 15 with "FIZZBUZZ" and print the result.

  
  
  #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i;
    for(i=1;i<=100;i++)
    {
        if(i%3==0 && i%15!=0)
        printf("FIZZ\t");
else if(i%5==0 && i%15!=0)
    printf("BUZZ\t");
    else if (i%15==0)
       printf("FIZZBUZZ\t");
  else
        printf("%d\t",i);
    }
    
     
    return 0;
}
