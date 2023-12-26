
/*            --- Number Guessing Game ---              */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, attempt = 0;
    srand(time(0));
    number = rand() % 100 + 1;
    
    do
    {
        printf("Guess the number (1 to 100):");
        scanf("%d", &guess);
        attempt++;
        if (guess > number)
        {
            printf("lower number please!\n");
        }
        else if (guess < number)
        {
            printf("higher number please!\n");
        }
        else
        {
            printf("Congratulations! You guessed it in %d attempts.\n", attempt);
        }
        
    } while (number != guess);

    return 0;
}