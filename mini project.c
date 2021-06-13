//MINI PROJECT
//NUMBER GUESSING GAME 
#include <math.h>
#include <stdio.h> 
#include <stdlib.h> 
void guess(int N)
{ 
    int number, guess, numberofguess = 1; 
    number = rand() % N; 
    printf("Guess a number between 1 and %d in three guess\n",N); 
    do { 
        if (numberofguess > 3) { 
            printf("\nYou Loose! Better luck next time \n"); 
            break; 
        } 
        scanf("%d", &guess);
        if (guess > number) 
        { 
            printf("Guessed number is greater than actual number ! please guess lower number \n"); 

           numberofguess++; 
        }

        else if (guess < number ) 
        { 
            printf(" Guessed number is lower than actual number! please guess higher number!\n"); 

            numberofguess++; 
        } 
        else
            printf(" Congratulations!You guessed the number in %d attempts!\n",numberofguess); 
    } while (guess != number); 
}

int main() 
{ 
int N = 10; 
guess(N); 
    return 0; 
}
