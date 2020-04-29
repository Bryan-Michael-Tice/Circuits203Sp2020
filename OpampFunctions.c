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

int UserPrompt(char *USERname) {

	int temp=0;
        char name[20];   
  
	printf("Please enter your name\n");
	scanf("%s",name);
//strlen,strcopy

	printf("\n\nThank you %s,  Would you like to find R1-R3 or Vo?\n",name);

	do{	
		printf("\n Please enter for R1-R3 or 2 for Vo?\n");

		scanf("%d",&temp);

	}while(temp!=2 && temp!=1);
	
	return temp;


}


void PromptA() {


        OPamp *FINDresistances;
	size_t resistances=0;
	FINDresistances =malloc(1*sizeof(OPamp));
	printf("How many Resistors do you want to use?");
	scanf("%d",&resistances);
	
	for(size_t i=0;i<resistances;++i){
	
		printf("Please Enter Resistances number #: %d\n",i);
		scanf("%d",&FINDresistances[i].Rin[i]);

		printf("\nResistances number #%d is %d\n",i,FINDresistances[i].Rin[i]);
	}

	printf("Please enter the Vo");
	scanf("%lf",&FINDresistances[0].Vout);
	printf("Please enter V -");
	scanf("%lf",&FINDresistances[0].Vminus);
	printf("Please enter V + ");
	scanf("%lf",&FINDresistances[0].Vplus);



	printf("Vout\033[0;31m%f\033[0m,\nplus%f,\nvminus%f,\n",FINDresistances[0].Vout,FINDresistances[0].Vplus,FINDresistances[0].Vminus);
		
	

free(FINDresistances);

}


void PromptB() {


        OPamp *FINDvO;

	FINDvO =malloc(1*sizeof(OPamp));
	
	printf("Please enter the Vo");
	scanf("%lf",&FINDvO[0].Vout);
	printf("Please enter V -");
	scanf("%lf",&FINDvO[0].Vminus);
	printf("Please enter V + ");
	scanf("%lf",&FINDvO[0].Vplus);


	printf("Vout\033[0;31m%f\033[0m,\nplus%f,\nvminus%f,\n",FINDvO[0].Vout,FINDvO[0].Vplus,FINDvO[0].Vminus);
		
	

free(FINDvO);

}


void displayOPampComplete(char *USERname) {

	printf("Thank you %s, for particpating!\n",USERname);
	printf("in a program Created by Bryan Tice and Paul Tice\n");
	printf("\n\n for Professor: Dr. Ferengi Circutis 203 UNM SPRING 2020\n\n");




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
