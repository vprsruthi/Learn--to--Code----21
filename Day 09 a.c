C program to print the HCF of two numbers

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n1,n2,i,h,s;
    
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
        h=n2;
    else
        h=n1;
    for(i=1;i<=h;i++)
    {if((n1%i==0)&&(n2%i==0))
     s=i;
    }
    printf("%d" ,s);
    
        

    
    return 0;
}
