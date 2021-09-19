#include <stdio.h>

int main()
{
    int i, j, number;

    printf("Enter number your number : ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        for (j = i; j < number; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}