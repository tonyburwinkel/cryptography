#include <stdlib.h>
#include <stdio.h>

int main(){
	char a = 'a';
	printf("%i ascii number of %c\n", a, a);

	char n = 'n';
	printf("%c rot 13 of %c\n", ((n+13)%122)+96, n);

	char N = 'N';
	printf("%c rot 13 of %c\n", ((N+13)%90)+64, N);

	printf("%i A is > 96\n", 'A'>96);

	printf("123mod122 = %i\n", 123%122);
}
