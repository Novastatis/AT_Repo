#include <stdio.h>

void matrixMultiplication(int tablica[3][5], int wiersze, int kolumny, int skalar) {
    for(int i = 0; i < wiersze; i++){
        for(int j = 0; j < kolumny; j++){
            tablica[i][j] *= skalar;
        }
    }
}

int main(){
    int matrix[3][5] = {{3, 8, 4, -2, 7},
                        {-2, 0, -6, 3, 1}, 
                        {3, -9, 0, 5, -2}};

    int scalar = 2;
    int wiersze = 3;
    int kolumny = 5;

    matrixMultiplication(matrix, wiersze, kolumny, scalar);

    printf("Wynik tablicy to:\n");
    for(int i = 0; i < wiersze; i++){
        for(int j = 0; j < kolumny; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}