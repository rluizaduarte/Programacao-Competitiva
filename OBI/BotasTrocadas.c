#include <stdio.h>
#include <stdlib.h>
 
int ** criarMatriz(int linhas, int colunas){
    int ** matriz = (int **) malloc(sizeof(int *) * linhas);
    for(int i = 0; i < linhas; i++){
        *(matriz + i) = (int *) malloc(sizeof(int) * colunas);
    }

    return matriz;
}
 
void lerMatriz(int ** matriz, int nBotas){
    int tamanho;
    char lado;
    for(int j = 0; j < nBotas; j++){
        getchar();
        scanf("%d %c", &tamanho, &lado);
        *(*(matriz) + j) = tamanho;
        if(lado == 'E'){
            *(*(matriz + 1) + j) = 'E';
        }else{
            *(*(matriz + 1) + j) = 'D';
        }
    }
}
 
int contaPares(int ** matriz, int nBotas, int totalPares){
    for(int j = 0; j < nBotas; j++){
        for(int k = j + 1; k < nBotas; k++){
            if(*(*(matriz) + j) != 0 && *(*(matriz) + k) != 0){
                if(*(*(matriz) + j) == *(*(matriz) + k) && *(*(matriz + 1) + j) != *(*(matriz + 1) + k)){
                    totalPares++;
                    *(*(matriz) + j) = 0;
                    *(*(matriz) + k) = 0;
                    break;
                }
            }
        }
    }

    return totalPares;
}
 
void limpaMatriz(int ** matriz, int linhas){
    for(int i = 0; i < linhas; i++){
        free(*(matriz + i));
    }
    free(matriz);
}
 
int main(){
    int nBotas;
    int nPares = 0;
    scanf("%d", &nBotas);

    int ** m = criarMatriz(2, nBotas);
    lerMatriz(m, nBotas);

    nPares = contaPares(m, nBotas, 0);
    printf("%d", nPares);

    limpaMatriz(m, 2);

    return 0;
}