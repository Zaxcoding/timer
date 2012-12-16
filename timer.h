#include <stdio.h>
#include <time.h>
#include <stdlib.h>


typedef struct _Split {
	char *name;				// to be malloc'd - name of split

	char hours;
	char minutes;
	char seconds;
	char milliseconds;
	
}SPLIT;

typedef struct _Route {
	char num_splits;

	SPLIT *splits;

}ROUTE;

void read_splits(ROUTE *route, char *filename);
