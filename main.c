#include <stdio.h>
#include "OPampFunctions.h"
int main(){
#include <string.h>


	int choice;
	displayOPamp();
	choice = UserPrompt();

	
	
	printf("%d user chose ",choice);

	if(choice == 1){
	
	
		PromptA();
	}
	else{
	//	PromptValuesB();
	}


	return 0;
}