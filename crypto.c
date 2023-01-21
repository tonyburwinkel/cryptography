#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "encrypt.h"
#include "decrypt.h"

int main(int argc, char* argv[]){
	if(argc<3)puts("too few arguments");
	else if(argc>3)puts("too many arguments");
	else {
	
	char* secret = argv[2];
	puts(secret);
	
	//encryptc(secret);
	encryptrot(secret);

	char* filename = argv[1];

	FILE *fp;
	fp=fopen(filename, "w");
	fprintf(fp, "%s\n", secret);

	//printf("caesar: %s\n", secret);
	printf("rot13: %s\n", secret);

	encryptrot(secret);

	printf("plaintext: %s\n", secret);


	}

	return 0;
}
