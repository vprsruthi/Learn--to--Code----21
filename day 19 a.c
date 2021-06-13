//Write a C program to check whether a given number is amstrong or not.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, sum =0,t,remainder,digits=0;
    scanf("%d",&n);
 t = n;
    
    
    while (t!=0){
        digits++;
    t=t/10;
}
t = n;
    while (t!=0)
    {
        remainder = t%10;
        sum = sum+power(remainder,digits);
        t=t/10;
    }
    
    
    if (n == sum)
        printf ("Amstrong",n);
    else
        
        printf ("Not Amstrong",n);
    
       /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
int power(int n,int r)
{
    int c,p = 1;
    for (c=1;c<=r;c++)
        p=p*n;
    return p;
        
}
