#include "timer.h"

int main(int argc, char **argv) {
	char zero = 1;
	ROUTE r;

	FILE *f = fopen("test.dat", "wb");
	if (f == NULL) {		// if file not found, tell them
		printf("Error opening f\nClosing program.\n");

		return;					// and quit
	}
	fwrite(&zero, sizeof(zero), 1, f);
	fclose(f);


	read_splits(&r, "test.dat");

	return 0;
}

void read_splits(ROUTE *route, char *filename) {
	char input;
	int i;

	FILE *f = fopen(filename, "rb+");

	if (f == NULL) {		// if file not found, tell them
		printf("Error opening %s\nClosing program.\n", filename);

		return;					// and quit
	}
	fread(&input, 1, 1, f);

	route -> num_splits = input;
	printf("num_splits is %d\n", route -> num_splits);

	for (i = 0; i < route -> num_splits; i++) {
		fread(&(route -> splits[i]), sizeof(SPLIT), 1, f);
	//	printf("readddinnng!!!\n");
	}
	

}