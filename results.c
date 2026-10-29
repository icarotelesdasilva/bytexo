#include "include/processer.h"

#include <stdio.h>
#include <string.h>

char buffer[4096];
size_t read;



int processer(FILE *file) {

while((read = fread(buffer, 1, sizeof(buffer), file)) > 0) {




	for(size_t i = 0; i < read; i++) {
		printf("%02X", (unsigned char)buffer[i]);

}
}


return 0;

}






