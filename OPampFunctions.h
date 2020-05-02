#include <stdlib.h>

struct _OPamp {


	double Vout;
	double VccPlus;
	double VccMinus;
	double Rf;
	double Rin[10];
	double Vin[10];
	double Va;
	double Vb;
	double Vc;


};

typedef struct _OPamp OPamp;

void displayOPamp ();

void UserPrompt();

void PromptA(OPamp *AmpIn);

void PromptB(OPamp *AmpIn);

void displayOPampComplete();
