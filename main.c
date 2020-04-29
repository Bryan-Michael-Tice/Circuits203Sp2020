#include <stdio.h>
#include "OPampFunctions.h"
int main(){
#include <string.h>


	char *User;
	int choice;
	displayOPamp();
	choice = UserPrompt(User);
	
	
	printf("%d user chose ",choice);

	if(choice == 1){
	
	
		PromptA();
	}
	else{
		
		PromptB();
	}

	displayOPampComplete(User); 

	return 0;
}
