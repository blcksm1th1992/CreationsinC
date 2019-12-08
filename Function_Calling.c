#include <stdio.h>
#include <stdlib.h>

float getNum1()
{
	float num1;

	printf("\n What two numbers would you wish to manipulate?\n Number 1: ");
	scanf("%f", &num1);
	return num1;
}

float getNum2()
{
	float num2;
	
	printf("\n Number 2: ");
	scanf("%f", &num2);
	return num2;
}

float add()
{
		float answer;
		answer = getNum1() + getNum2();
		return answer;
}

float subtract()
{
		float answer;
		answer = getNum1() - getNum2();
		return answer;
}

float division()
{
		float answer;
		answer = getNum1() / getNum2();
		return answer;
}

float multiply()
{
		float answer;
		answer = getNum1() * getNum2();
		return answer;
}



int main()
{
	int nameop;
	float answer;
	
	do
	{
	printf("Please choose one of the following option:\n1.) Addition \n2.) Subtraction \n3.) Division \n4.) Multiply \n5.) Quit \n\n");
	scanf("%d", &nameop);
	

		switch (nameop)
		{
			case 1: answer = add();
					printf("The Answer is %f \n\n", answer);
					break;
		
			case 2: answer = subtract();
					printf("The Answer is %f n\n", answer);
					break;

			case 3: answer = division();
					printf("The Answer is %f \n\n", answer);
					break;

			case 4: answer = multiply();
					printf("The Answer is %f \n\n", answer);
					break;
					
			default:printf("Sorry to see go Mr.Stark! Love you 3,000\n");
					exit(69);
		}	
	}while(nameop <= 4);
	return 0;
}
