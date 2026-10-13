#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
//initialise random number generator 
srand(time(0));

//generate random number between 1 and 100
int randomNumber =(rand()%100)+1;
int no_of_guesses =0;
int guessed;

//print the random number
// printf("random number: %d\n",randomNumber);

do
{
    printf("guess the number");
    scanf("%d",&guessed);
    if(guessed > randomNumber){
        printf("lower number please !!\n");
    }
    else if (guessed<randomNumber){
        printf("higher number please !!\n");
    }
    no_of_guesses++;

} while (guessed != randomNumber);


printf("WOWWHH!! you have guessed the number in %d guesses ",no_of_guesses);

    return 0;
}