#include <stdio.h>
#include "OPampFunctions.h"
#include <string.h>

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


	OPamp FINDresistances[10]= {};
	
	printf("Please enter the Vo");
	scanf("%f",&FINDresistances.Vout);
	printf("Please enter V -");
	scanf("%f",&FINDresistances.Vminus);
	printf("Please enter V + ");
	scanf("%f",&FINDresistances.Vplus);

FINDresistances[0].Rin[0]=FINDresistances[0].Vout+FINDresistances[0].Vminus;

	printf("Vout%f,\nplus%f,\nvminus%f,\nR1%f",FINDresistances[0].Vout,FINDresistances[0].Vplus,FINDresistances[0].Vminus,FINDresistances[0].Rin[0]);
		
	



}




