#include "bayes.h"

double Bayes(double Pba, double Pb, PopulationPtr pp)
{
	return Pba*Pb / sum(pp->pop);	
}

