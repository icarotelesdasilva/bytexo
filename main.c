
// Copyright 2026 @icarotelesdasilva


#include <stdio.h>
#include <string.h>

#include "include/processer.h"

int main(int argc,  char *argv[]) {

if (argc < 2) {

	printf("use ./main <file>\n");

return 1;

}

FILE *file = fopen(argv[1], "rb");

if (file == NULL) {

	printf("file not found.");

return 1;

}

processer(file);

fclose(file);

return 0;

}

