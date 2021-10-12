#include "population.h"

typedef Population Genome;
typedef PopulationPtr GenomePtr;

void make_genome(PopulationPtr gp);
void add_to_genome(Data d, PopulationPtr gp);

double genome_fitness(PopulationPtr gp);

