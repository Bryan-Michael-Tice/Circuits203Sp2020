#include <stdlib.h>

struct _OPamp {


	double Vout;
	double Vplus;
	double Vminus;
	double Rin[10];
	double Vin[10];

};

typedef struct _OPamp OPamp;

void displayOPamp ();

int UserPrompt(char *USERname);

void PromptA();

void PromptB();

void displayOPampComplete(char *USERname);
