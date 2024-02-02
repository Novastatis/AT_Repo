/* Napisz funkcje, która doda do siebie dwie tablice liczb całkowitych. Do weryfikacji działania funkcji wykorzystaj poniższe tablice:

int matrixA[3][3] = {{3, 8, 4},
{-2, 5, -6},
{9, 3, 3}};

int matrixB[3][3] = {{4, 1, -2},
{6, -5, 5},
{-4, 3, -2}};

Aby sprawdzić czy funkcja działa prawidłowo, wyświetl wartości tablicy wynikowej w programie głównym (funkcji main). */

#include <stdio.h>

void dodajTablice(int A[3][3], int B[3][3], int wynik[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            wynik[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main() {
    int matrixA[3][3] = {{3, 8, 4},
                         {-2, 5, -6},
                         {9, 3, 3}};

    int matrixB[3][3] = {{4, 1, -2},
                         {6, -5, 5},
                         {-4, 3, -2}};

    int wynik[3][3];

    // Dodaj tablice
    dodajTablice(matrixA, matrixB, wynik);

    // Wydrukuj wynik
    printf("Wynik dodawania:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", wynik[i][j]);
        }
        printf("\n");
    }

    return 0;
}