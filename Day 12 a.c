Write a C program to check whether a number present in the 1D array or not.
  
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    
    int i,len,sno,myarray[10];
    scanf("%d", &len);
    for(i=0; i<len; i++)
    { 
        scanf("%d", &myarray[i]);
    }
        scanf("%d", &sno);
    
        for(i=0; i<len; i++)
        {
            if(myarray[i]==sno)
            {
                printf("%d is present in this array", sno);
                return 0;
            }
        }
    
            printf("%d is not present in this array", sno);
        
    
}
    

  
    

