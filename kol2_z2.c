/* 2.Napisz program, który pobierze od użytkownika liczbę całkowitą. 
Następnie napisz funkcje sprawdzającą czy pobrana zmienna jest podzielna bez reszty przez 5 oraz czy jest większa bądź równa 15. 
Jeśli dana wartość spełnia następujący warunek, to funkcja powinna zwrócić wartość logiczną prawdy, jeśli nie to powinna zwrócić wartość logiczną fałszu. */

#include <stdio.h>
#include <stdbool.h>

bool sprawdzWarunki(int liczba) {
    return (liczba % 5 == 0 && liczba >= 15);
}

int main() {
    int liczba;
    
    printf("Podaj liczbę całkowitą: ");
    scanf("%d", &liczba);
    
    bool wynik = sprawdzWarunki(liczba);
    printf("Wynik sprawdzenia warunków: %s\n", wynik ? "true" : "false");
    return 0;
}