Write a C Program to read the values for a square 2D array and print its main/principal and secondary diagonals.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int ar[20][20], i, j, m, n;
    scanf("%d%d",&m,&n);
    for (i=0; i<m;i++)
    {
     for (j=0; j<n;j++) 
     {
         scanf("%d",&ar[i][j]);
         
     }   
    }
    if (m==n)
    {
        for(i=0;i<m;i++)
        {
            printf("%d ",ar [i] [i]);
            
        }
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%d ", ar[j] [m-1-j]);
            
        }
        
    
    }
    else
    {
        printf("ERROR");
        
    }

    
    return 0;
}
