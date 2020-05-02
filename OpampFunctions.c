#include <stdio.h>
#include "OPampFunctions.h"
#include <string.h>
#include <stdlib.h>







void displayOPamp() {


	size_t intro=0;

	printf("\n\n		WELCOME TO CIRCUIT 203 EXTRA CREDIT PROJECT \n");
	printf("\n		 Created by Bryan Tice and Paul Tice\n\n");
	printf("\n\n		 Instructor: Dr. Ahmed Elfrgani\n\n");
	printf("\n\n	 Please examine the OP AMP below and follow the instructions\n to solve it.\n"); 




	
	printf("\n                IDEAL OP AMP problem 5.12 in textbook                                           \n");
	printf("                             _________\033[1;31m Rf\033[0m ___________                           \n");
	printf("        	             |                      |                           \n");
	printf("                             |....__    \033[1;31m V+\033[0m         |                           \n");
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
	do{
	printf("\n\n Is this a SUMMING AMP? ENTER 1 for yes and 0 for no\n\n");	
	scanf("%d",&intro);
	}while(intro!=1);


}

void UserPrompt() {

	int temp=0;
        char name[20];   
  
	printf("Please enter your name\n");
	scanf("%s",name);
//strlen,strcopy

	printf("\n\nThank you\033[1;34m %s\033[0m,To find Vo please enter the requested values below:   \n",name);


}



void PromptA(OPamp *AmpIn) {


 //	OPamp *FINDresistances;
	size_t resistances=3;
//	FINDresistances =malloc(1*sizeof(OPamp));
	
	
//	printf("How many Resistors do you want to use?");
//	scanf("%d",&resistances);
	
	for(size_t i=0;i<resistances;++i){
	
		printf("Please Enter Resistances number #: %d\n",i+1);
		scanf("%lf",&AmpIn[0].Rin[i]);

	}

	printf("Please enter V - or -Vcc");
	scanf("%lf",&AmpIn[0].VccMinus);
	printf("Please enter V + or Vcc ");
	scanf("%lf",&AmpIn[0].VccPlus);
	printf("Please enter Rf ");
	scanf("%lf",&AmpIn[0].Rf);

	printf("Please enter Va");
	scanf("%lf",&AmpIn[0].Vin[0]);
	printf("Please enter Vb");
	scanf("%lf",&AmpIn[0].Vin[1]);
	printf("Please enter Vc");
	scanf("%lf",&AmpIn[0].Vin[2]);


/*
	printf("\nThe VCC or V+ entered is: \033[0;31m%f\033[0m,\nThe V- Or -VCC entered is:\033[0;31m%f\033[0m,\nThe Rf entered is: \033[0;31m%f\033[0m",FINDresistances[0].Vout,FINDresistances[0].VccPlus,FINDresistances[0].VccMinus,FINDresistances[0].Rf);
	
*/        
//	AmpIn=FINDresistances;

//	free(FINDresistances);


}


void PromptB(OPamp *AmpIn) {


	
	printf("                             _________\033[1;31m%0.f\033[0m ___________                           \n",AmpIn[0].Rf);
	printf("        	             |                      |                           \n");
	printf("                             |....__    \033[1;31m%0.1f\033[0m        |                           \n",AmpIn[0].VccPlus);
	printf("--\033[1;31m%0.f\033[0m----------------------|  |      -               |                           \n",AmpIn[0].Rin[0]);
	printf("\033[1;36m^\033[0m    --\033[1;31m%0.1f\33[0m---------------|--| -     --_            |--------                   \n",AmpIn[0].Rin[1]);
	printf("\033[1;36m|       ^ \033[0m --\033[1;31m%0.f\033[0m-----------|  |         _ >               +                      \n",AmpIn[0].Rin[2]);
	printf("\033[1;36m|       |    ^  \033[0m             |       --                                         \n");
	printf("\033[1;36m|       |    |  \033[0m   ----------| +    ..             \033[1;31m      Vo \033[0m`                    \n");
	printf("\033[1;36m%0.1f  %0.1f  %0.1f \033[0m  |         |...--    \033[1;31m%0.f\033[0m                                     \n",AmpIn[0].Vin[0],AmpIn[0].Vin[1],AmpIn[0].Vin[2],AmpIn[0].VccMinus);
	printf("\033[1;36m|       |    |    \033[0m |                                      -                     \n");
	printf("\033[1;36m                  \033[0m |                                                            \n");
	printf("                  ___                                     |                     \n");
	printf("                   _                                    ----                    \n");
	printf("                   .                                     --                     \n");
        printf("                                                          .                     \n");
		
	


}


void displayOPampComplete() {

	

}
