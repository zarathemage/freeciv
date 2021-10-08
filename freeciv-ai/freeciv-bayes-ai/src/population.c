#include "population.h"

void make_population(PopulationPtr pp)
{
	make_list(pp->pop);
	pp->count = 0;
} 

void add_to_population(Data d, PopulationPtr pp)
{
	add_to_list(d, pp->pop);
}


