#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void aline( int len)
{
	int k;
	
	for ( k = 1; k <= len; k = k + 1)
	{
		printf("@");
	}
	printf("\n");
}

int getNumber()
{
	int anum;
	printf("What is your guess: ");
	scanf("%d", &anum);
	while ( anum > 10 )
	{
		printf("Try again, What is your guess: ");
		scanf("%d", &anum);
	} 
	
	return anum;
}


int main()
{
	int secret, guess;
	
	aline(3);
	aline(8);
	
	srand( time(NULL) );

	secret = rand() % 10 +1;
	printf("\nsecret number is %d\n", secret); 
	
	guess = getNumber();
	
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
