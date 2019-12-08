#include <stdio.h>
#include <stdlib.h>


typedef struct 
{
   int account_number;
   char companyname[20];
   int date;
   int amount;  
}account;


int main(void)

{
  account ledger;
  int data_lines;
  int data_in;

	puts("How many lines of data do you need to put in?");
	scanf("%d", & data_lines);
	data_in = data_lines; // creates algorithim for a loop
	puts("After you put in your data, press Ctrl+C to stop the program"); // how to exit the program once done with the data input
	puts(""); 
	
	while ( data_lines == data_in) // loop the user can stay in until they are done inputting data
	{
    FILE *newacct;
    newacct = fopen("robco.txt", "a+++");

    printf("Enter Company Name, Invoice Number, Date, Amount:");
    scanf("%s %d %d %d", ledger.companyname, &ledger.account_number, &ledger.date, &ledger.amount);
    fprintf(newacct,"%s %d %d %d\n", ledger.companyname, ledger.account_number, ledger.date, ledger.amount);
    fclose(newacct);
	}
}
