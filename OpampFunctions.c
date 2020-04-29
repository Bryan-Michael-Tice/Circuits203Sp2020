#include <stdio.h>
#include "OPampFunctions.h"
#include <string.h>
#include <stdlib.h>

void displayOPamp() {

	printf("WELCOME TO CIRCUIT 203 EXTRA CREDIT PROJECT \n");
	printf(" Created by Bryan Tice and Paul Tice\n");
	printf("\n\n Professor: Dr. Ferengi\n\n");




	printf("                      _______ R fb __________                \n");
	printf("                      |                      |               \n");
	printf("                      |....__     V-         |               \n");
	printf("----------R1-------|  |      -               |               \n");
	printf("------R2-----------|--| -     --_            |--------       \n");
	printf("---R3--------------|  |         _ >               +          \n");
	printf("                      |       --                             \n");
	printf("            ----------| +    ..                   Vo         \n");
	printf("            |         |...--     V-                          \n");
	printf("            |                                      -         \n");
	printf("           ___                                     |         \n");
	printf("            _                                    ----        \n");
	printf("            .                                     --         \n");
        printf("                                                   .         \n");

	


}

int UserPrompt() {

	int temp=0;
        char name[20];   
  
	printf("Please enter your name\n");
	scanf("%s",name);

	printf("\n\nThank you %s,  Would you like to find R1-R3 or Vo?\n",name);

	do{	
		printf("\n Please enter for R1-R3 or 2 for Vo?\n");

		scanf("%d",&temp);

	}while(temp!=2 && temp!=1);
	
	return temp;


}


void PromptA() {


	OPamp *FINDresistances;

	FINDresistances =malloc(1*sizeof(OPamp));
	
	printf("Please enter the Vo");
	scanf("%f",&FINDresistances->Vout);
	printf("Please enter V -");
	scanf("%f",&FINDresistances->Vminus);
	printf("Please enter V + ");
	scanf("%f",&FINDresistances->Vplus);

FINDresistances->Vout+FINDresistances->Vminus=&FINDresistances->Rin[0];

	printf("Vout%f,\nplus%f,\nvminus%f,\nR1%f",FINDresistances->Vout,FINDresistances->Vplus,FINDresistancesxx->Vminus,FINDresistances->Rin);
		
	

free(FINDresistances);

}




