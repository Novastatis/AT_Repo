#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

int main() {
	// Deklarujemy pointer zmiennej typu FILE
	FILE *pFile = NULL;
	const char* text = "DATA";

	// INFO: fopen.c
	pFile = fopen("data", "w");
	if(pFile == NULL) {
		printf("FAILED TO OPEN FILE!\n");
		return -1;
	}

	// size_t fwrite( const void* restrict buffer, size_t size, size_t count, FILE* restrict stream );
	fwrite(text, sizeof(char), strlen(text), pFile);

	// Zakonczenie dzialania programu
	fclose(pFile);
	printf("END\n");
	return 0;
}
