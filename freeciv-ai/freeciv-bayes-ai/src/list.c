#include "list.h"

#include <stdlib.h>

void make_list(ListPtr lp)
{
	lp->data = NULL;
	lp->next = NULL;
}

void add_to_list(Data d, ListPtr lp)
{
	ListPtr lp2 = lp->next;
	*(lp->data) = d;
	lp->next = lp2;
}

DataPtr search_list(Data d, ListPtr lp)
{
	while (lp->next != NULL && *(lp->data) != d)
		*lp++;
	if (lp->next == NULL)
		return NULL;
	else
		return lp->data;
}
 
// Bayes methods

double sum(ListPtr lp)
{
	double sum = 0.0;

	while (lp->next != NULL) 
		sum += (double)*(lp->data);

	return sum;
}

	
