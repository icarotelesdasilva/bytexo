
// Copyright 2026 @icarotelesdasilva


#include "../include/processer.h"

#include <stdio.h>
#include <string.h>


int main(int argc,  char *argv[]) {

if (argc < 2) {

	printf("use ./bytexo <file>\n");

return 1;

}

FILE *file = fopen(argv[1], "rb");

if (file == NULL) {

	printf("file not found.\n");

return 1;

}

processer(file);

fclose(file);

return 0;

}

