//Write a C program to find the second maximum element in an array of integer elements
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int ar[20],n,max,smax,i;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
        
    }
    scanf("%d",&n);
    max=-100;
    smax=-100;
        
        for(i=0;i<n;i++)
        {
            if(ar[i]>max)
            {
                max=ar[i];
                
            }
                
        }   
    for (i=0;i<n;i++)
    {
        if(ar[i]>smax&&ar[i]!=max)
        { 
    smax=ar[i];
}
}
printf("%d",smax);

        
    return 0;
}
