#include <stdio.h>
#include "OPampFunctions.h"
int main(){
#include <string.h>



	int choice;
	displayOPamp();
	UserPrompt();
	
	OPamp *newExampleOpAmp;	
	
	newExampleOpAmp = calloc(1,sizeof(OPamp));
	
		PromptA(newExampleOpAmp);
		
		PromptB(newExampleOpAmp);
	

	        PromptC(newExampleOpAmp);	

		PromptB(newExampleOpAmp);
	
		free(newExampleOpAmp);

	return 0;
}
