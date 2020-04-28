#include <stdlib.h>

struct _OPamp {


	double Vout;
	double Vplus;
	double Vminus;
	double Rin[10];

};

typedef struct _OPamp OPamp;

void displayOPamp ();

int UserPrompt();

void PromptA();
	
