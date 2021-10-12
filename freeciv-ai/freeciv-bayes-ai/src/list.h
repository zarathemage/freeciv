// NOTE the list contains numbers

typedef double Data;
typedef Data *DataPtr;

typedef struct list {
	DataPtr data;
	struct list *next;
} List;

typedef List *ListPtr;

void make_list(ListPtr lp);
void add_to_list(Data d, ListPtr lp);

DataPtr search_list(Data d, ListPtr lp);


