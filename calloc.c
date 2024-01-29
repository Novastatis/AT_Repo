#include <stdio.h>
#include <stdlib.h>
#define N 10

int main(){
    int number;
    int* pNumber = NULL;

    //void *calloc(size_t nitems, size_t size)
    //type *ptr = (type*)calloc(elements, sizeof(type));
    pNumber = (int*)calloc(N, sizeof(int));
    if(pNumber == NULL) return -1;

    //TODO:
    for(int i=0; i<N; i++) {
        pNumber[i] = i;
    }

    for(int i=0; i<N; i++) {
        printf("%d\n", pNumber[i]);
    }

    //Free up space
    free(pNumber);
    return 0;
}