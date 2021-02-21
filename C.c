#include <stdio.h>
#include "./func.h"
#include <string.h>
/*
strlen
strcat
strcpy
strcmp

maloc       memory alocation
free()      desalocar
realoc
*/



int vetor[10]={1,2,3,4,5,6,7,8,8,9,0};

void max_min(int *max, int *min){

    int i; *min = *max= vetor[0];
    for (i=1; i<10;i++) if (vetor[i]< *min) *min= vetor[i];
    for (i=1; i<10;i++) if (vetor[i]< *max) *max= vetor[i];
    for (i=1; i<100;i++){
        int j = maloc(i);
    }
    
}

int main(){
    int x = 10;
    char input[20];
    scanf("%s",input);              // input

    // int r = mult(x+1, mult(2,3));
    printf("resultado: %d\n", mult(x));
    int max,min;
    max_min(max, min);
    return 0;
}

int mult(int a){
    return a;
}