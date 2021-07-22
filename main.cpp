#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <netinet/in.h>
#include <stdlib.h>
#include "add-nbo.h"


int main(int argc, char** argv){

	add-nbo(argv[1], argv[2]);
	return 0;

}

