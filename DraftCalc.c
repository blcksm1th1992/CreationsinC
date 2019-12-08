#include <stdio.h>
#include <stdlib.h>

int female;
int active_duty;
int cadets_msa;
int student_officer;
int visa;
int GJ;
int draft;
int Arkham_Asylum;
int grandma;
int woman_without_the_wo;

int main()
{
	puts("NOTE: With only a few exceptions, the registration requirement applies to all male US citizens and male immigrants in the US who are between 18 and 26 years old. The following questions are just for the possible exceptions anything else (example ROTC students0) still have to sign up for the draft.");
	
	puts("\nAre you a girl?(1 for Yes/0 for No)");
	scanf("%d", &female);
	
	puts("Are you on active duty for the armed forces?(1 for Yes/0 for No)");
	scanf("%d", &active_duty);

	puts("Are you a cadet or midshipmen at Service Academies or Coast Guard Academy?(1 for Yes/0 for No)");
	scanf("%d", &cadets_msa);

	puts("Are you a student in Officer Procurement Programs at the Citadel, North Georgia Collage and State University, Norwich Unniversity, Virginia Military Institute, Texas A&M University, Virginia Polytechnic Institute and State University?(1 for Yes/ for No)");
	scanf("%d", &student_officer);
	
	puts("Are you a lawful non-immigrants on current non-immigrants visas?(1 for Yes/0 for No)");
	scanf("%d", &visa);
	
	puts("Are you a seasonal agricultural worker(H-2A Visa)?(1 for Yes/0 for No)");
	scanf("%d", &GJ); // GJ is a friend of mine from El salvador who works as a farm hand. he told me to use him as on of the immigrant variables.
	
	puts("Are you incarcerated, or hospitalized, or institutionalized for medical reasons?(1 for Yes/0 for No)");
	scanf("%d", &Arkham_Asylum);
	
	puts("Are you continually confined to a residence, hospital, or institution?(1 for Yes/0 for No)");
	scanf("%d", &grandma);
	
	puts("Are you an individual who was born female but changed your gender to male? NOTE: Male to female gender changes do not except you from the draft?(0 for Yes/ 1 for no)");	
	scanf("%d", &woman_without_the_wo);

	draft = female + active_duty + cadets_msa + student_officer + visa + GJ + Arkham_Asylum + grandma + woman_without_the_wo;
	if ( draft > 0)
	{
		puts("You don't have to sign up for the draft.");
	}
	else if( draft == 0 )
	{
		puts("You have to sign up for the draft.");
	}
	else
	{
		puts("errors");
	}
	return 0;
}
