#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number;
    int guess;
    int count = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    do
    {
        printf("---!!! Enter the Number btwn 1 to 100 !!!---\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Enter Smaller number Please!!!\n\n");
        }
        else if (guess < number)
        {
            printf("Enter Bigger number Please!!!\n\n");
        }
        else
        {
            printf("You Guessed in %d Attempts\n", count);
            printf("\n Thank You for Playing !!! Play Again----!!!");              }
        count++;
    } while (guess != number);
    return 0;
}