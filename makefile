crypto: caesar.c decrypt.h encrypt.h encrypt.c decrypt.c
	gcc caesar.c decrypt.c encrypt.c -o $@
