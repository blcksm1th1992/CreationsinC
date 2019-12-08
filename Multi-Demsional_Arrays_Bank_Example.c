#include <stdio.h>
#include <stdlib.h> // for the use srand()

int main()
{	
	srand(42); // for psuedo number generation.
	float bank[12][5]; // the array of the bank table 12 = months and 5 is the amount of money in the accounts
	int month, cash; // variables used to populate the bank array
	float avg; //this is the average var
	float sum; // this will be used later to calculate average
	
	
	puts("Welcome To The World's Worst Bank\nHere's the Accounts Currently \n");
	
	char names[6][20]={"Willie","Kelly","Terry", "Jordan", "Taylor"}; // this set up an arrray to list all the account names
    int nrows = 5;
    int i;
    for(i =0; i < nrows; i++)
    {
        printf("%s\t\t", names[i]);
    }
    puts("");
	
	for ( month = 0; month < 12; month++) // populating the array.
	{
		for ( cash = 0; cash < 5; cash++)
		{
            float value = rand() % 20000; // creating the range betwe $0.00 to $20,000.00 dollars
            float num1 = rand();
            float num2 = rand();
            float decimal;
            
            if(num1 > num2) // a loop to generate a random decimal.
            {
                decimal = num2/num1;
            }
            else
            {
                decimal = num1/num2;
            }
            value = value + decimal;
			bank[month][cash] = value; // attaching the random numbers  to the bank array
            printf("%.2f  \t", bank[month][cash]); // printing the array
        }
		puts("");
	}

	puts("\nThe Monthly Averages: ");
	puts(" ");
	
	for ( cash = 0; cash < 5; cash++)
	{
		sum = 0;
		for (month = 0; month < 12; month++)
		{
			sum += bank[cash][month];
			
		}
		avg = sum / 12;  // calculating the averages
		printf("%.2f  \t", avg); // printing all the averages
	 }
	
	puts(" "); // a way to add new lines outside the loop so the format stays consistent.
	
	return 0;
}
