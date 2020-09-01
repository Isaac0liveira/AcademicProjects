#include <stdio.h>
#include <locale.h>
#include <string.h>
void print(int lista[9][9]){
    int indexI = 0;
    for (int i = 0; i < 9; ++i) {
        int indexJ = 0;
        for (int j = 0; j < 9; ++j) {
            if(lista[i][j] < 10 && lista[i][j] > 0){
                if(indexJ == 2 || indexJ == 5 || indexJ == 8){
                    printf(" %d|",lista[i][j]);
                }else {
                    printf(" %d", lista[i][j]);
                }
            }else{
                if(indexJ == 2 || indexJ == 5 || indexJ == 8){
                    printf(" x|",lista[i][j]);
                }else {
                    printf(" x", lista[i][j]);
                }
            }
            indexJ += 1;
        }
        printf("\n");
        if(indexI == 2 || indexI == 5 || indexI == 8) {
            printf(" _____ _______ _____ \n");
        }
        indexI += 1;
    }

}

int verify(int indexI, int indexJ, int lista[9][9]){
    if(lista[indexI][indexJ] >= 10){
    return 1;
    }
    setlocale(LC_ALL, "portuguese");
    int index = 0, index2 = 0;
    printf("Valor:%d \nErro: ", lista[indexI][indexJ]);
    for (int i = 0; i < 9; ++i) {
        if(index != indexI){
            if(lista[indexI][indexJ] == lista[i][indexJ]){
                wprintf(L"Numero na posição de coluna %d da linha %d repetido \n", indexJ, index);
                return 1;
            }
        }
        index += 1;
    }
    index2 = 0;
    for (int i = 0; i < 9; ++i) {
        if(index2 != indexJ){
            if(lista[indexI][indexJ] == lista[indexI][i]){
                wprintf(L" Numero na posição de coluna %d na linha %d repetido! \n", index2, indexI);
                return 1;
            }
        }
        index2 += 1;
    }
    char posicao[40];
    index = 0, index2 = 0;
    index = (indexI / 3) * 3;
    index2 = (indexJ / 3) * 3;
    int guardIndex = index2;
    for (int i = 0; i < 3; ++i) {
        index2 = guardIndex;
        for (int j = 0; j < 3; ++j) {
            if((index + i) != indexI && (index + j) != indexJ) {
                if (lista[index + i][index2 + j] == lista[indexI][indexJ]) {
                    wprintf(L"Número repetido na matriz da coluna %d na linha %d \n", index2, index);
                    return 1;
                }
            }
        }
    }
    printf("Nenhum\n");
    return 0;
}

void write(int lista[9][9]){
    setlocale(LC_ALL, "portuguese");
    int guardavalor;
    int indexI = 0;
    for (int i = 0; i < 9; ++i) {
        int indexJ = 0;
        for (int j = 0; j < 9; ++j) {
            if(lista[i][j] == 0){
                wprintf(L"Digite um valor entre 1 à 10 para a posição %d da linha %d: \n", indexJ, indexI);
                scanf("%d", &lista[i][j]);
                while((lista[i][j] >= 10 && lista [i][j] <= 0) || verify(indexI, indexJ, lista) == 1 ){
                    wprintf(L"Erro! Digite um numero entre 1 à 10: \n");
                    scanf("%d", &lista[i][j]);
                }
                print(lista);
            }
            indexJ += 1;
        }
        indexI += 1;
    }
    wprintf(L"Fim de jogo, você conseguiu!");
}

 void main() {
     int lista[9][9] = {{0,0,1,0,0,2,4,0,6},
                        {6,0,0,0,0,5,0,1,8},
                        {0,8,2,9,1,6,0,0,0},
                        {2,0,0,8,0,4,5,0,0},
                        {1,0,8,0,0,0,6,0,9},
                        {0,0,0,0,0,0,8,2,7},
                        {5,1,4,7,3,0,0,6,2},
                        {3,0,7,2,4,0,0,0,0},
                        {0,2,0,0,0,1,3,7,0}};


    print(lista);
    write(lista);
 }
