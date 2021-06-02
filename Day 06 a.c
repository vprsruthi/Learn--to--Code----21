WACP to accept marks of three subjects.. Calculate the percentage and respective grade according to following: Percentage >= 90% : Grade A Percentage >= 80% : Grade B Percentage >= 70% : Grade C Percentage >= 60% : Grade D Percentage >= 40% : Grade E Percentage < 40% : Grade F


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,c;
    float p;
    scanf("%d %d %d\n ",&a ,&b ,&c);
    p=(((a+b+c)/(float)300)*100);
     printf("%.2f\n",p);
    if (p>=90)
     printf("A"); 
    else if (p>=80)
     printf("B");
    
    else if(p>=70)
     printf("C");
    
    else if (p>=60)
    printf("D");
             else if (p>=40)
    
                      
    printf("E");
             else 
    printf("F");
    
    
    
    
    
      
    return 0;
}
