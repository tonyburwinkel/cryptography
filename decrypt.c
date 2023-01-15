#include "decrypt.h"

// decrypt a caesar ciphered ciphertext
void decryptc(char* ctext){
	int i;
	for(i=0;ctext[i]!='\0';i++){
		ctext[i] = ctext[i]-1;
	}
}

//decrypt a rot13 encrypted ciphertext
void decryptrot(char* ctext){
	int i;
	for(i=0;ctext[i]!='\0';i++){
		char c = ctext[i];
		if(c>64&&c<91) {
		ctext[i]=(ctext[i]+13)%91;
		if(ctext[i]<64) ctext[i]+=64;
		} else if (c>96&&c<123) {
		ctext[i]=(ctext[i]+13)%123;
		if(ctext[i]<97)ctext[i]+=97;	
		}
	}
}
