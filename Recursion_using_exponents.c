#include <stdio.h>

float function(float n1, float n2); // creates the form for the later function() [ the funtion that calculates the exponential ]. 

int main() 
{
	float base, ex, result;

	puts("Enter Base number:");
	scanf("%f", &base);
	puts("Enter the exponent:");   
	scanf("%f", &ex);   // lines 11-14 get the user input for the base and exponent.

	result =  function(base, ex); // creates a form/place for the values from function() to be used as the results variable
	printf("%f^%f = %f \n", base, ex, result);

	return 0;
}

float function(float base, float ex) // calculates the exponential. 
{
	if (ex > 0)
	{
		return (base * function(base, ex-1));
	}

	else if (ex < 0)
	{
		return (function(base, ex +1)/base);
		//return 2; // this is a debugging tool I used when the negatives where not working
	}
	
	else
	{
		return 1; // all values that arent greater or less than zero returns 1. 
	}
}





