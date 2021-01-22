#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 15
int main (){
    char parola[MAX], copia[MAX];
    int i, j, temp, fine;

    fine = 0;

    printf("Inserisci una parola: ");
    gets(parola);

    strcpy(copia, parola);

    for(i = 0; i < strlen(parola); i++){
        if(copia[i + 1] == copia[i]){
            copia[i + 1] = -1;
        }
    }
    printf("\n");
    do{
        for(i = 0; i < strlen(copia); i++){
            switch(copia[i]){
                default:
                    printf("%c", copia[i]);
                    break;
                case -1:
                    break;
            }
        }
        if(i == strlen(copia)){
            fine = 1;
        }
    }while(fine == 0);
}