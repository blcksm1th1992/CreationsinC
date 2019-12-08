#include <stdio.h>

int main()
{
    int a, b;

    printf("Input height:");

    scanf("%d", &a);

    printf("Input width:");

    scanf("%d", &b);

    for(int i=1; i<=a; i++)
    {
        for(int j=1; j<=b; j++)
        {
            printf("*");

        }

        printf("\n");

    }

    return 0;

}
