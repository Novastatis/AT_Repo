/* 2.Napisz program, który pobierze od użytkownika tekst, a następnie przekaże wskaźnik tablicy tekstu do funkcji, 
która zliczy wystąpienia małych oraz dużych liter w tekście. Aby sprawdzić czy funkcja działa prawidłowo, 
wyświetl w programie głównym (funkcji main) ilość wystąpień małych oraz dużych liter we wprowadzonym przez użytkownika tekście. 
Do realizacji zadanie wykorzystaj tablice ASCII: */

#include <stdio.h>

void swapc(char* text){
    while(*text != '\0'){
        if(*text >= 'a' && *text <= 'z') *text = *text - 32;
        else if(*text >= 'A' && *text <= 'Z') *text = *text + 32;
        text++;
    }
}

int main(){
    char text[1000];
    fgets(text, sizeof(text), stdin);

    swapc(text);
    printf("%s\n", text);

    return 0;
}