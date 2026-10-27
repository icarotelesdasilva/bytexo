#include <stdio.h>
#include <string.h>

char buffer[4096];
size_t read;

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

while((read = fread(buffer, 1, sizeof(buffer), file)) > 0) {

	for(size_t i = 0; i < read; i++) {
		printf("%02X", (unsigned char)buffer[i]);

	}

}


fclose(file);

return 0;

}

