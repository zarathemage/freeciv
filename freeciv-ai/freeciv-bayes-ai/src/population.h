#include "list.h"

typedef struct population { ListPtr pop; int count; 
} Population;

typedef Population *PopulationPtr;

void make_population(PopulationPtr pp);
void add_to_population(Data d, PopulationPtr pp);


