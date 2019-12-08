#include <stdio.h>

int amtDue;   // I decided to use int variables for this program
              // the Float variables had more deprciating values 
int amtgiven; // and sense integers are just numbers, I could create a
int change;   // system of equations (see lines 27-31) to produce change 
int dollarbill; // until change = 0. 
int quarter;
int dime;
int nickel;
int penny;

int main()
{
	printf ("Enter the Amount Due: ");
    scanf ("%d", &amtDue);
 
    printf ("Enter the Amount Given: ");
    scanf ("%d", &amtgiven);
 
    change = amtgiven - amtDue;
 
    printf ("Change Due, in cents: %d \n", change);
    
    dollarbill = change / 100;
    quarter = (change - (dollarbill * 100)) / 25;
    dime = (change - ((dollarbill * 100) + (quarter * 25))) / 10;
    nickel = (change - ((dollarbill * 100) + (quarter * 25) + (dime * 10))) / 5;
    penny = (change - ((dollarbill * 100) + (quarter * 25) + (dime * 10) + (nickel * 5))) / 1;
     
    printf ("There are: %d dollar bills \n There are: %d quarters \n There are %d dimes \n There are %d nickels \n and %d pennies \n", dollarbill, quarter, dime, nickel, penny);
	printf ("Thank You for shopping at RobCo\n");
}

