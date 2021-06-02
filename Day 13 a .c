Write a C program to change the case of alphabets.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int c = 0;
    char ch, s[1000];
    gets(s);
    while(s[c] !='\0')
    {
        ch = s[c];
        if(ch >='A' && ch <= 'Z')
            s[c] = s[c] + 32;
        else if (ch >='a' && ch<='z')
            s[c] = s[c] - 32;
        c++;
        
        
    }
    printf("%s",s);
    

    
    return 0;
}
