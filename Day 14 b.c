Write a C Program to read a 2D Array and then display it.

  
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
    for(i=0;i<m;i++)
    {
        
        for(j=0;j<n;j++)
        {
            
           scanf("%d",&ar[i][i]);
            
        }
        }
        for(i=0;i<m;i++)
        {
        for(j=0;j<n;j++)
        {
            printf("%d ",ar [i] [j]);
            
        }
            
                printf("\n");
        
    
    }

    
        
    

      
    return 0;
}
