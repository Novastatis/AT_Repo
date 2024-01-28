// PRZYKAD UZYCIA FUNKCJI FREAD DO ODCZYTANIA INFORMACJI Z PLIKU W C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	// Deklarujemy pointer zmiennej typu FILE
	FILE *pFile = NULL;

	// INFO: fopen.c
	pFile = fopen("data", "r");
	if(pFile == NULL) {
		printf("ERROR: FAILED TO OPEN FILE!\n");
		return -1;
	}

	fseek(pFile, 0, SEEK_END); // Szuka konca pliku
	int size = ftell(pFile);
	rewind(pFile); // Cofa strumien do poczatku pliku
	printf("Size: %d\n", size);

	char* pBuffer = (char*)malloc(size);
	if(pBuffer == NULL) {
		printf("ERROR: FAILED TO INITIALIZE BUFFER SIZE");
		return -1;
	}
	
	// size_t fread( void *restrict buffer, size_t size, size_t count, FILE *restrict stream );
	fread(pBuffer, sizeof(char), size, pFile);
	for(int i = 0; i < size; i++) printf("%c", pBuffer[i]); // Opcjonalne
	printf("\n");
	
	// Zakonczenie dzialania programu
	fclose(pFile);
	free(pBuffer);
	return 0;
}
