#include <stdio.h>
#include <stdlib.h> 
#include <string.h>

struct Food
{
	char name[20];
	float price;
	int calories;
	int protien;
	int carbs;
	int fiber;
	int fat;
}; 

void popArr(FILE *binary, int size)
{
	int i;
	struct Food* meal;
	meal = malloc(sizeof(struct Food) * size);
	binary = fopen("array.bin", "wb+");

	for(i = 0; i < size; i++)
	{
		fseek(binary, 0, SEEK_END); 
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
	fwrite(meal, sizeof(struct Food), size, binary);
	fclose(binary);
}

void printMenu(FILE *binary, int size)
{
	int i; 
	struct Food* meal;
	meal = malloc(sizeof(struct Food) * size);
	binary = fopen("array.bin", "rb");

	for (i = 0; i < size; i++)
    {
      fread(meal, sizeof(struct Food), 1, binary);	
      printf("\n");
        
      i = i + 1;
      printf("%d.\n", i);
      i = i - 1;
		printf("Name: %s \n", meal[i].name);
		printf("Price: %.2f ", meal[i].price);
		printf("Calories: %d ", meal[i].calories);
		printf("Protien: %d  ", meal[i].protien);
		printf("Carbs: %d ", meal[i].carbs);
		printf("Fiber: %d ", meal[i].fiber);
		printf("Fat: %d \n", meal[i].fat);
	}
	fclose(binary);
}

void print(FILE* binary, int size) 
{
	int i;
	struct Food meal;
  	binary = fopen("array.bin", "rb");
	  	while (fread(&meal, sizeof(struct Food), 1, binary))
	  	 	{
		 		printf("%s\n", meal.name);
		 	}

	 fclose(binary);
}

void takeOrder(FILE *binary, int size)
{ 
  puts("\n");
  int count[5] = {0,0,0,0,0};
  int total = 0;
  int priTotal = 0;
  int calTotal = 0;
  int proTotal = 0;
  int carbTotal = 0;
  int fatTotal = 0;
  int j, i;

  FILE *fp2;
  fp2 = fopen("receipt.txt", "w");

  struct Food meal[size];
  binary = fopen("array.bin", "rb+");



    while (j != 6) {

    printf("\n\nTotal Items: %d  ", total);
    printf("Total Price: %d  ", priTotal);
    printf("Total Calories: %d  ", calTotal);
    printf("Total Protein: %d  ", proTotal);
    printf("Total Fiber: %d  ", carbTotal);
    printf("Total Fat: %d\n\n", fatTotal);

  	fread(meal, sizeof(struct Food) * size, 1, binary);
    print(binary, 5);

    printf("6: Quit\n\n");
  	printf("Choose by selecting the number of the order the are listed.");
    printf(" \nMake your selection: ");
    scanf(" %d", &j);
    if(j !=6){fprintf(fp2, "Item: %s\n", meal[j-1].name);}
    if (j >= 0 && j <= 5)
	{
      count[j-1] += 1;
    }
	
    total = 0;
    priTotal = 0;
    calTotal = 0;
    proTotal = 0;
    carbTotal = 0;
    fatTotal = 0;
	
    for (i = 0; i < size; i++) 
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

    fprintf(fp2, "\n\tTotal Items: %d  ", total);
    fprintf(fp2, "\tTotal Price: %d  ", priTotal);
    fprintf(fp2, "\tTotal Calories: %d  \n", calTotal);
    fprintf(fp2, "\tTotal Protein: %d  ", proTotal);
    fprintf(fp2, "\tTotal Fiber: %d  ", carbTotal);
    fprintf(fp2, "\tTotal Fat: %d", fatTotal);
  fclose(binary);
}

int main()
{
	FILE *binary;
   popArr(binary, 5);// here we populate an array that gets written to a binary file to be used later    
    printMenu(binary, 5);
	takeOrder(binary, 5);
	return 0;
}

