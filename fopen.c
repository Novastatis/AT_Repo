#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	// Deklarujemy pointer do zmiennej typu FILE
	FILE *pFile = NULL;

	// „r” - Otwiera istniejący plik w trybie do odczytu.
	// „r+” - Otwiera istniejący plik w trybie do odczytu i zapisu.
	// „w” - Tworzy nowy plik i ustawia uchwyt w trybie do zapisu.
	// „w+” - Tworzy nowy plik i ustawia uchwyt w trybie do odczytu jak i zapisu.
	// „a” - Otwiera istniejący plik w trybie do zapisu. Jeśli plik nie istnie to zostanie on utworzony.
	// „a+” - Otwiera istniejący plik w trybie do odczytu i zapisu. Jeśli plik nie istnie to zostanie on utworzony.

	// std::FILE* fopen( const char* filename, const char* mode );	
	pFile = fopen("data", "w+");
	if(pFile == NULL) {
		printf("Failed to open file!\n");
		return -1;
	}

	// Zakonczenie pracy programu
	fclose(pFile);
	printf("END\n");
	return 0;
}
