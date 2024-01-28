// 6.1. Stwórz strukturę o nazwie owoc, która zawierać będzie następujące pola:
// 
// owoc {
// 	nazwa: tekst
// 	ilość pestek: liczba całkowita dodatnia
// 	wielkość: wartość wyliczeniowa (np. mały, średni, duży)
// 	czy jest jadalny: wartość logiczna
// }
//
// Następnie utwórz w programie przykładową strukturę i zapisz jej zawartość do pliku
// tekstowego. Sprawdź czy struktura została zapisana poprawnie poprzez odczytanie i
// wyświetlenie zawartości pliku w konsoli programu.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {

	struct fruit {
		const char* name;
		unsigned int seeds;
		enum size_t { small, big, large} size;
		bool isEdible;
	};

	struct fruit orange;
	orange.name = "orange";
	orange.seeds = 2;
	orange.size = big;
	orange.isEdible = true;

	FILE *pFile = NULL;
	pFile = fopen("fruit_data", "w");
	if(pFile == NULL) {
		printf("ERROR: FAILED TO OPEN FILE\n");
		return -1;
	}

	fprintf(pFile, "%s, %d, %d, %d", orange.name, orange.seeds, orange.size, orange.isEdible);

	fclose(pFile);
	printf("END\n");
	return 0;
}
