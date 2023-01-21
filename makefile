crypto: crypto.c decrypt.h encrypt.h encrypt.c decrypt.c
	gcc crypto.c decrypt.c encrypt.c -o $@
