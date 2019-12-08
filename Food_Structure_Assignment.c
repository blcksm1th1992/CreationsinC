#include <stdio.h>
#include <stdlib.h> // didnt come into play i think

typedef struct
{
	char name[20];
	float price;
	int calories;
	int protien;
	int carbs;
	int fiber;
	int fat;
}Food; 


void printMenu(Food item)
{
	printf("Name: %s \n", item.name);
	printf("Price: %f \n", item.price);
	printf("Calories: %d \n", item.calories);
	printf("Protien: %d \n", item.protien);
	printf("Carbs: %d \n", item.carbs);
	printf("Fiber: %d \n", item.fiber);
	printf("Fat: %d \n", item.fat);
	puts(" \n\n");
}


void popArr(Food meal[], int size)
{
	int i;

	for(i = 0; i < size; i++)
	{
		printf("Enter the food name: \n");
		scanf("%s", meal[i].name);

		printf("Enter the food price: \n");
		scanf("%f", &meal[i].price);

		printf("Enter the food calories: \n");
		scanf("%d", &meal[i].calories);

		printf("Enter the food protien: \n");
		scanf("%d", &meal[i].protien);

		printf("Enter the food carbs: \n");
		scanf("%d", &meal[i].carbs);

		printf("Enter the food fiber: \n");
		scanf("%d", &meal[i].fiber);

		printf("Enter the food fat \n");
		scanf("%d", &meal[i].fat);
		puts(" \n\n");
	}
}


void print(Food* item, int size) 
{
	int i;

	 for (i = 0; i < size; i++) 
	 {
	    printf("%d: %s\n", i+1, item[i].name);
	 }
}


void takeOrder(Food meal[])
{
  puts("\n");
  int count[11] = {0,0,0,0,0,0,0,0,0,0,0};
  int total = 0;
  int priTotal = 0;
  int calTotal = 0;
  int proTotal = 0;
  int carbTotal = 0;
  int fatTotal = 0;
  int j, i;
  
  while (j != 6) {
	 
    int cont = 1;
    print(meal, 5);
    printf("6: Quit\n\n");
    printf("Total Items: %d  ", total);
    printf("Total Price: %d  ", priTotal);
    printf("Total Calories: %d  ", calTotal);
    printf("Total Protein: %d  ", proTotal);
    printf("Total Fiber: %d  ", carbTotal);
    printf("Total Fat: %d\n\n", fatTotal);
	printf("Make your selection: ");
    scanf(" %d", &j);
	
    if (j >= 0 && j <= 5)
	{
      count[j] += 1;
    }
	
    total = 0;
	
    priTotal = 0;
    calTotal = 0;
    proTotal = 0;
    carbTotal = 0;
    fatTotal = 0;
	
    for (i = 0; i < 5; i++) 
	{
      total += count[i];
	  
      priTotal += (meal[i].price * count[i]);
      calTotal += (meal[i].calories * count[i]);
      proTotal += (meal[i].protien * count[i]);
      carbTotal += (meal[i].carbs * count[i]);
      fatTotal += (meal[i].fat * count[i]);
     //printf("%d, %d, %d, %d, %d\n", meal[i].price, meal[i].calories, meal[i].protien, meal[i].carbs, meal[i].fat); // a friend used this for debugging because it wasn't adding correctly
    }
	
  }
}

int main()
{
	Food meal[5]; // first meal is equal to 0 in the array placement
	popArr(meal, 5);
	int i;

	for (i = 0; i < 5; i++)
    {
      printf("\n");
        
      i = i + 1;
      printf("%d.\n", i);
      i = i - 1;
        
      printMenu(meal[i]);
    }

	takeOrder(meal);
	return 0;
}

