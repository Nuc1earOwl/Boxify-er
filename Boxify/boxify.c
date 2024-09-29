#include <stdio.h>

int main()
{
    register int dimension;

    printf("Welcome to the Boxify-er 3000, programmed by a total amateur in C!\n");
    printf("Enter a number to boxify:\n");
    scanf("%d", &dimension);

    for (register int y = 0; y < dimension; y++)
    {
        printf("\n");
        for (register int x = 0; x < dimension; x++)
        {
            if (y == 0)
            {
                printf("#");
            }
            else if (y == dimension - 1)
            {
                printf("#");
            }
            else
            {
                if (x == 0)
                {
                    printf("#");
                }
                else if (x == dimension - 1)
                {
                    printf("#");
                }
                else
                {
                    printf(" ");
                }
            }
        }
    }
    printf("\n\nThanks for using this program! Bub-bye :)");
    
    return 0;
}
