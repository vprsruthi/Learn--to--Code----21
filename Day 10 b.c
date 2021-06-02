Write a C program to print the Roots of a Quadratic Equation of the form ax^2+bx+c



#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
float a, b, c, d, Real, img, root1, root2;
   scanf("%f %f %f",&a ,&b ,&c);
    d = (b * b)-4 * a * c;
if(d>0)
{
    root1=(-b + sqrt(d))/(2 * a);
    root2=(-b - sqrt(d))/(2 * a);
    printf("Distinct Real : %.2f , %.2f", root1, root2);
}

else if(d==0)
{
    root1=root2=-b/(2*a);
    printf("Equal Real: %.2f , %.2f", root1, root2);
    
}
else if(d<0)
{
           Real=-b/(2 * a);
           img=(sqrt(-d))/(2 * a);
    printf("Complex: %.2f + i%.2f , %.2f - i%.2f" , Real, img, Real, img);
}
       
    return 0;
}
