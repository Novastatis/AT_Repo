// PRZYKLAD UZYCIA FUNKCJI FPRINTF W CELU ZAPISU DANYCH ROZNEGO TYPU DO PLIKU W C
#include <stdio.h>
#include <stdlib.h>

int main() {
	// Deklarujemy pointer zmiennej typu FILE
	FILE *pFile = NULL;

	// Deklarujemy zmienne
	const char name[] = "Kowalski";
	const char firstname[] = "Jan";
	const int age = 19;

	// INFO: fopen.c
	pFile = fopen("data", "w+");
	if(pFile == NULL) {
		printf("Failed to open file!\n");
		return -1;
	}

	// int fprintf( FILE *restrict stream, const char *restrict format, type vars... );
	fprintf(pFile, "%s, %s, %d", firstname, name, age);

	// Zakonczenie dzialania programu
	fclose(pFile);
	printf("END\n");
	return 0;
}
