#include <stdio.h>
#include "OPampFunctions.h"
int main(){
#include <string.h>



	int choice;
	displayOPamp();
	UserPrompt();
	
	OPamp *newExampleOpAmp;	
	
	newExampleOpAmp = malloc(1*sizeof(OPamp));
	
		PromptA(newExampleOpAmp);
		
		PromptB(newExampleOpAmp);
	

	displayOPampComplete(); 

	free(newExampleOpAmp);

	return 0;
}
