/* 2.Napisz program, który pobierze od użytkownika tekst, a następnie przekaże wskaźnik tablicy tekstu do funkcji, 
która zliczy wystąpienia małych oraz dużych liter w tekście. Aby sprawdzić czy funkcja działa prawidłowo, 
wyświetl w programie głównym (funkcji main) ilość wystąpień małych oraz dużych liter we wprowadzonym przez użytkownika tekście. 
Do realizacji zadanie wykorzystaj tablice ASCII: */

#include <stdio.h>

void zliczWystapieniaLiter(char *tekst, int *małeLitery, int *dużeLitery) {
    while (*tekst != '\0') {
        if (*tekst >= 'a' && *tekst <= 'z') {
            (*małeLitery)++;
        } else if (*tekst >= 'A' && *tekst <= 'Z') {
            (*dużeLitery)++;
        }
        tekst++;
    }
}

int main() {
    char tekst[100];
    int małeLitery = 0, dużeLitery = 0;

    
    printf("Podaj tekst: ");
    fgets(tekst, sizeof(tekst), stdin);

    // Zlicz wystąpienia liter
    zliczWystapieniaLiter(tekst, &małeLitery, &dużeLitery);

    
    printf("Ilość małych liter: %d\n", małeLitery);
    printf("Ilość dużych liter: %d\n", dużeLitery);

    return 0;
}