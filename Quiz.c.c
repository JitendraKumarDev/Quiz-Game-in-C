
#include <stdio.h>

int main()
{
    int answer;
    int score = 0;

    printf("===== C PROGRAMMING QUIZ =====\n");

    printf("\nQ1. Who developed C language?\n");
    printf("1. James Gosling\n");
    printf("2. Dennis Ritchie\n");
    printf("3. Bjarne Stroustrup\n");
    printf("4. Guido van Rossum\n");
    printf("Enter answer: ");
    scanf("%d", &answer);

    if (answer == 2)
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf("Wrong Answer!\n");
    }

    printf("\nQ2. Which symbol ends a C statement?\n");
    printf("1. .\n");
    printf("2. ,\n");
    printf("3. ;\n");
    printf("4. :\n");
    printf("Enter answer: ");
    scanf("%d", &answer);

    if (answer == 3)
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf("Wrong Answer!\n");
    }

    printf("\nQ3. Which function is used for output?\n");
    printf("1. scanf()\n");
    printf("2. printf()\n");
    printf("3. main()\n");
    printf("4. return()\n");
    printf("Enter answer: ");
    scanf("%d", &answer);

    if (answer == 2)
    {
        printf("Correct Answer!\n");
        score++;
    }
    else
    {
        printf("Wrong Answer!\n");
    }

    printf("\n===== QUIZ RESULT =====\n");
    printf("Your Score: %d/3\n", score);
    printf("Percentage: %.2f%%\n", (score / 3.0) * 100);

    return 0;
}
