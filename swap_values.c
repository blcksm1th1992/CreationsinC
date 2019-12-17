#include <stdio.h>
#include <stdlib.h>

int main()
{

int x, y;
printf("Enter Y Value:");
scanf("%d", &y);
printf("Enter X Value:");
scanf("%d", &x);

x = x - y;
y = x + y;
x = y - x; 

printf("By Magics now X=%d  and Y=%d \n", x, y);


 return 0;
}
