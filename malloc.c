/*ALLOCATE MEMORY USING MALLOC*/
#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(){
    int number = 10;
    int* pNumber = NULL;

    //void *malloc( size_t size );
    //var* ptr = (var*)malloc(elements*sizeof(var));
    pNumber = (int*)malloc(N*sizeof(int));
    if(pNumber == NULL) return -1;

    //TODO:
    for(int i=0; i<N; i++) {
        pNumber[i] = i;
    }

    for(int i=0; i<N; i++) {
        printf("%d\n", pNumber[i]);
    }

    //Free up memory
    free(pNumber);
    return 0;
}