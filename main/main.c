
// Copyright 2026 @icarotelesdasilva


#include "../include/processer.h"

#include "../include/logs.h"


#include <stdio.h>
#include <string.h>


int main(int argc,  char *argv[]) {


if (argc < 2) {

	printf("use bytexo <file>\n");

return 1;

}



if (strcmp(argv[1], "--version") == 0) {

printf(WARNING "0.0.01 (beta)\n" RESET);

return 0;

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

