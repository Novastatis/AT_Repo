#include <stdio.h>
#define N 10

void function(int *reference){ //Uses pointer as reference to varriable instead of creating new variable for function
    printf("Value given by reference = %d\n", *reference);
    printf("Adress given by reference = %p\n", reference);
}

typedef struct {
    int real;
    float imaginary;
} complexNumbers;

int main(){
    int age = 20;

    printf("Value of Age = %d\n", age);
    printf("Adress of age = %p\n", &age);

    //Pointers example
    int *pAge = NULL; //Good practice to assign a NULL when declaring a pointer
    pAge = &age;

    printf("Accesing the value by pAge = %d\n", *pAge); //Dereferenction
    printf("The adress stored at pAge = %p\n", pAge);

    //Reference through pointer and function pointer example
    void *pFunction = NULL;
    pFunction = &function;

    function(pAge);
    printf("Adress of reference funtion = %p\n", pFunction);

    //Pointer to struct example
    complexNumbers section;
    complexNumbers *pSection = NULL;

    pSection = &section;
    pSection -> real = 2;
    pSection -> imaginary = -1.5;

    printf("Section real number is = %d\n", section.real);
    printf("Section imaginary number is = %f\n", section.imaginary);

    //Dynamic struct allocation example
    complexNumbers *pDynamicSection = NULL;
    pDynamicSection = (complexNumbers*)malloc(sizeof(complexNumbers));

    printf("Dynamic section real number is = %d\n", pDynamicSection->real = 2137);
    printf("Dynamic section imaginary number is = %f\n", pDynamicSection->imaginary = -1.5);

    free(pDynamicSection);

    //Dynamic struct vector allocation example
    //complexNumbers vector[N];
    complexNumbers *pVector, *helper = NULL;
    pVector = (complexNumbers*)malloc(N*sizeof(complexNumbers));
    helper = pVector;

    for(int i=0; i<N; i++){
        //vector[i].real = i*5;
        //vector[i].imaginary = i*3.75;
        pVector -> real = i*5;
        pVector -> imaginary = i*3.75;
        pVector++;
    }

    pVector = helper;
    for(int i=0; i<N; i++) {
        printf("[%2d %5.2f]\n", pVector->real, pVector->imaginary);
        pVector++;
    }
    return 0;
}