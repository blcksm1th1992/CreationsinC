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
        for(int j=1; j<=b; j++) //In the lecture you said possibly two nested loops, an extra for loop made it complicated so i used an if else statement
        {
            if (i>1 && i<a && j>1 && j<b) {
                printf(" ");

            }
            else {
                printf("*");

            }

        }

        puts("");

    }

    return 0;

}
