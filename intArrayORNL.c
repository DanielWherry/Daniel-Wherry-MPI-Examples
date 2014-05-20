#include <stdio.h>

int main(){

	const int SIZE = 1000000000;
	int integers[SIZE];

	FILE *outfile;

	outfile = fopen("integers.dat","w");

	for(int i = 0; i < SIZE; i++){
		integers[i] = i;
		fprintf(outfile,"%d\n", integers[i]);
	}
	fclose(outfile);
	return 0;
}
	

	
