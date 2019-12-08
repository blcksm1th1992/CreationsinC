#include <stdio.h>

char first_name[24];
char last_name[24];
char favorite_band[24];
char favorite_movie[24];
char favorite_tvshow[24];
char favorite_color[24];
char swallow[24];
int main()
{
    puts("What is your first name?");
    scanf(" %s", &first_name);
    
    puts("What is your last name?");
    scanf(" %s", &last_name);
    
    puts("What is your favorite band?");
    scanf(" %s", &favorite_band);
    
    puts("What is your favorite movie?");
    scanf(" %s", &favorite_movie);
    
    puts("What is your favorite TV Show?");
    scanf(" %s", &favorite_tvshow);
    
    puts("What is your favorite color?");
    scanf(" %s", &favorite_color);
    
	puts("What is the airspeed of an unladen swallow?");
    scanf(" %s", &swallow);
  
    printf("Hello %s %s\n", first_name, last_name); //this is to say hi
    printf("Is this your favorite band %s\n", favorite_band); // to show favorite band
    printf("Is this your favorite movie %s\n", favorite_movie); // to show favorite movie
    printf("Is this your favorite TV Show %s\n", favorite_tvshow); // to show favorite TV Show
    printf("Is this your favorite color %s\n", favorite_color); // to show favorite color
	printf("%s\n", swallow);
    return 0;
}






// I do apologize I haven't had access to a computer this last week or so. Instead of using Code Blocks or Genie, I used an Android C compiler. I wrote and executed this from my samsung galaxy S8, and not entirely sure it will work on a laptop. 
