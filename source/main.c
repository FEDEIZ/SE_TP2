#include "foo.h"
#include "bar.h"
#include <stdio.h>

int main(void) {
	printf("Empieza el programa principal\r\n");
	foo();
	bar();
	printf("Termina el programa principal\r\n");
	return 0;
}