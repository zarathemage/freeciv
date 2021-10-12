#include "bayes.h"

double population_bayes(double Pba, double Pb, PopulationPtr pp)
{
	return Pba*Pb / population_sum(pp);	
}

