#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //INITIALIZE & FILL VARIABLES
    int   size = NULL;
    char  output_char = NULL, 
          input_char = NULL; 
    char *pBuffer = NULL;
    FILE *pFile = NULL;

    //TAKE INPUT FROM USER
    printf("Enter character to change: ");
    scanf("%c", &output_char);
    fflush(stdin);

    printf("Enter character to be replaced with: ");
    scanf("%c", &input_char);
    fflush(stdin);
    
    //OPEN FILE
    pFile = fopen("input.txt", "r");
    if(pFile == NULL) {
        printf("ERROR: FAILED TO OPEN DATA.TXT FILE");
        return -1;
    }

    //INITIALIZE BUFFER SIZE
    fseek(pFile, 0, SEEK_END);
    size = ftell(pFile);
    pBuffer = (char*)malloc(size+1);
    if(pBuffer == NULL) {
        printf("ERROR: FAILED TO INITIALIZE BUFFER SIZE");
        return -1;
    }

    //COPY FILE CONTENT TO BUFFER AND CLOSE FILE
    rewind(pFile);
    fread(pBuffer, sizeof(char), size, pFile);
    fclose(pFile);

    //REPLACE CHARACTERS IN DYNAMIC ARRAY
    for(int i = 0; i < size; i++){
        if(pBuffer[i] == output_char) pBuffer[i] = input_char;
    }

    //OPEN FILE
    pFile = fopen("output.txt", "w+");
    if(pFile == NULL) {
        printf("ERROR: FAILED TO CREATE OUTPUT.TXT FILE");
        return -1;
    }

    //WRITE INTO INPUT.TXT FILE
    fwrite(pBuffer, sizeof(char), strlen(pBuffer), pFile);

    //CLOSE FILE & KILL VARIABLES
    fclose(pFile);
    free(pBuffer);
    return 0;
}