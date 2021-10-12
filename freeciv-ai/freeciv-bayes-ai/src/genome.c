#include "genome.h"

void make_genome(GenomePtr gp)
{
	make_population((PopulationPtr)gp);
} 

void add_to_genome(Data d, GenomePtr gp)
{
	add_to_population(d, (PopulationPtr)gp);
}

double genome_fitness(GenomePtr gp)
{
	return population_sum((PopulationPtr)gp);
}


