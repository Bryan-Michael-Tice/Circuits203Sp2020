#include <stdio.h>
#include "OPampFunctions.h"
#include <string.h>
#include <stdlib.h>







void displayOPamp() {

	printf("		WELCOME TO CIRCUIT 203 EXTRA CREDIT PROJECT \n");
	printf("		 Created by Bryan Tice and Paul Tice\n");
	printf("\n\n		 Professor: Dr. Ferengi\n\n");




	
	printf("\n                IDEAL OP AMP                                                                   \n");
	printf("                             _________\033[1;31m Rf\033[0m ___________                           \n");
	printf("        	             |                      |                           \n");
	printf("                             |....__    \033[1;31m V-\033[0m         |                           \n");
	printf("--\033[1;31mR1\033[0m----------------------|  |      -               |                           \n");
	printf("\033[1;36m^\033[0m    --\033[1;31mR2\33[0m-----------------|--| -     --_            |--------                   \n");
	printf("\033[1;36m|       ^ \033[0m --\033[1;31mR3\033[0m-----------|  |         _ >               +                      \n");
	printf("\033[1;36m|       |    ^  \033[0m             |       --                                         \n");
	printf("\033[1;36m|       |    |  \033[0m   ----------| +    ..             \033[1;31m      Vo \033[0m`                    \n");
	printf("\033[1;36mV1      V2   V3  \033[0m  |         |...--    \033[1;31m V- \033[0m                                     \n");
	printf("\033[1;36m|       |    |    \033[0m |                                      -                     \n");
	printf("\033[1;36m                  \033[0m |                                                            \n");
	printf("                  ___                                     |                     \n");
	printf("                   _                                    ----                    \n");
	printf("                   .                                     --                     \n");
        printf("                                                          .                     \n");

	


}

int UserPrompt(char *USERname) {

	int temp=0;
        char name[20];   
  
	printf("Please enter your name\n");
	scanf("%s",name);
//strlen,strcopy

	printf("\n\nThank you\033[1;34m %s\033[0m,  Would you like to find V1-V3 or Vo?\n",name);

	do{	
		printf("\n\033[0;36m PLEASE ENTER THE NUMBER\033[0m\033[0;31m 1 \033[0m\033[0;36m for V1-V3 or OR THE NUMBER\033[0m\033[0;31m 2\033[0m\033[0;36m for Vo?\033[0m\n");

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

	}

	printf("Please enter the Vo");
	scanf("%lf",&FINDresistances[0].Vout);
	printf("Please enter V - or -Vcc");
	scanf("%lf",&FINDresistances[0].VccMinus);
	printf("Please enter V + or Vcc ");
	scanf("%lf",&FINDresistances[0].VccPlus);
	printf("Please enter Rf ");
	scanf("%lf",&FINDresistances[0].Rf);

/*
	printf("The Vo entered is: \033[0;31m%f\033[0m,\nThe VCC or V+ entered is: \033[0;31m%f\033[0m,\nThe V- Or -VCC entered is:\033[0;31m%f\033[0m,\nThe Rf entered is: \033[0;31m%f\033[0m",FINDresistances[0].Vout,FINDresistances[0].VccPlus,FINDresistances[0].VccMinus,FINDresistances[0].Rf);
		
*/


	





	free(FINDresistances);


}


void PromptB() {


        OPamp *FINDvO;

	FINDvO =malloc(1*sizeof(OPamp));
	
		
	

free(FINDvO);

}


void displayOPampComplete(char *USERname) {

	

}
