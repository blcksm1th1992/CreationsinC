#include <stdio.h>
#include <stdlib.h>


int main()
{
	int size=0;
	int *integer = (int*)malloc(sizeof(int));
	int i, j, n, *tmp = integer;

	do
	{

		printf("__________________________________________________________________________________________________________\nWelcome to the Stack Program, so do you want to:\n\n 1.) Add a Value to the Stack? \n 2.) Process a node in the stack?\n 3.) Quit the Program? \n\n");
		
			if (integer[0] == 0 || size == 0 )
			{
				printf("The Stack is Currently empty!\n\n");
			}

			else if (integer[0] != 0)
			{
				printf("The Current DATA Stack:\n");
				for (i = 0; i < size; ++i)
					{
						printf("%d\t", integer[i]);
					}
				puts("\n");
			}
			else{printf("ERROR\n");}

		printf("$> ");
		scanf("%d", &n);
		puts(" ");

		switch (n)
		{
			case 1: size = size + 1;
					tmp = (int*)realloc(tmp, ((size+1) * sizeof(int)));
					printf("Now add a value to the stack: ");
					scanf("%d", &j);
					tmp[i++] = j;
					puts(" ");
					break;

			case 2: if (i >= size && size > 0)
					{
						i = i-1;
						printf("Now procesing %d!!!\n", tmp[i]);
						size = size - 1;
						tmp = (int*)realloc(tmp, sizeof(int)*(size));
					}
					break;	

			case 3: printf("Freeing all the memory. Toksha, Have a Good Day!\n"); 
					break;		
			default: printf("ERROR\n");
					 break;
		}
	}while(n != 3);


	free(tmp);
	return 0;
}
