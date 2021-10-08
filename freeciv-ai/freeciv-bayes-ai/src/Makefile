CC=gcc

OBJS= list.o \
	population.o \
	bayes.o \

all: $(OBJS)
	### $(CC) -shared fc-bayes-ai-.so $(OBJS)
	$(CC) -shared $(OBJS)
	
clean:
	rm -f *.o

.c.o:
	$(CC) -c $<
