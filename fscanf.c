// PRZYKLAD UZYCIA FUNKCJI FSCANF DO ODCZYTANIA I PRZYDZIELENIA ZAWARTOSCI PLIKU DO ZMIENNYCH W C
// KONIECZNA JEST ZNAJOMOSC ZAWARTOSCI I KOLEJNOSCI DANYCH W PLIKU
#include <stdio.h>
#include <stdlib.h>

int main() {
	// Deklarujemy pointer zmiennej typu FILE
	FILE *pFile = NULL;

	// Deklarujemy zmienne
	char name[32];
	char firstname[32];
	int age;

	//INFO: fopen.c
	pFile = fopen("data", "r");
	if(pFile == NULL) {
		printf("FAILED TO OPEN FILE!\n");
		return -1;
	}

	// int fscanf( std::FILE* stream, const char* format, ... );
	// WARNING: fscanf traktuje przecinki przy zmiennych jako czesc stringa
	fscanf(pFile, "%s %s %d", firstname, name, &age);

	// Zakonczenie dzialania programu
	printf("%s %s %d\n", firstname, name, age);
	fclose(pFile);
	return 0;
}
