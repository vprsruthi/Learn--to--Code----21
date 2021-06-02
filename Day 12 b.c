Write a C program to find the frequency of odd and even numbers in the 1D array.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    {
        int i,n,myarray[10],evenos=0,oddnos=0;
        scanf("%d", &n);
        for(i=0;i<n; i++)
        {
            scanf("%d", &myarray[i]);
            
        } 
        for(i=0; i<n; i++) {
            if(myarray[i]%2==0)
            {
                evenos++;
                
            } 
            else 
            {
                oddnos++;
                
            }
            
        } 
        printf("%d\n%d", evenos,oddnos);
    
    }
    
    return 0;
}
