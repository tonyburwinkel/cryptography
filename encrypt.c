#include "encrypt.h"

// encrypt plaintext using a caesar cipher
void encryptc(char* ptext){
	int i;
	for(i=0;ptext[i]!='\0';i++){
		ptext[i] = ptext[i]+1;
	}
}

// encrypt plaintext using rot13
void encryptrot(char* ptext){
	int i;
	for(i=0;ptext[i]!='\0';i++){
		char c = ptext[i];
		if(c>64&&c<91) {
		ptext[i]=(ptext[i]+13)%91;
		if(ptext[i]<64) ptext[i]+=64;
		} else if (c>96&&c<123) {
		ptext[i]=(ptext[i]+13)%123;
		if(ptext[i]<97)ptext[i]+=97;	
		}
	}
}
