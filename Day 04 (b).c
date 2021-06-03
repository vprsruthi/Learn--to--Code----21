Write a C Program to find the maximum and minimum from three user inputted numbers.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int x,y,z;
            scanf("%d %d %d\n", &x,&y,&z);
            if(x>y && x>z)
                printf("%d\n",x);
            else if(y>x && y>z)
                printf("%d\n",y);
            else
                printf("%d\n",z);
             if(x<y && x<z)
                printf("%d\n",x);
            else if(y<x && y<z)
                printf("%d\n",y);
            else
                printf("%d\n",z);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
