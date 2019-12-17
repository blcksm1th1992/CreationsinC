#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int secret, guess;
	
	srand( time(NULL) );

	secret = rand() % 10 +1;
	printf("secret number is %d\n", secret); 
	
	printf("What is your guess: ");
	scanf("%d", &guess);
	
	while (secret != guess)
	{
		printf("Sorry, that is wrong\n");
		
		if ( guess < secret)
		{
			printf("Too low\n");
		}
		else
		{
			printf("Too high\n");
		}
		
		printf("What is your guess: ");
		scanf("%d", &guess);
	}
	printf("Correct\n");

	return 0;
}
