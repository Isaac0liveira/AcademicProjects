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
                wprintf(L"Numero na posição %d da coluna %d repetido \n", indexJ, index);
                return 1;
            }
        }
        index += 1;
    }
    index2 = 0;
    for (int i = 0; i < 9; ++i) {
        if(index2 != indexJ){
            if(lista[indexI][indexJ] == lista[indexI][i]){
                wprintf(L" Numero na posição %d da coluna %d repetido! \n", index2, indexI);
                return 1;
            }
        }
        index2 += 1;
    }
    char posicao[40];
    if((indexI >= 0 && indexI <= 2) && (indexJ >=0 && indexJ <=2)){
        index = 0;
        index2 = 0;
        strcpy(posicao, "Numero repetido na matriz 0 da coluna 0");
    }else if((indexI >= 3 && indexI <= 5) && (indexJ >=0 && indexJ <=2)){
        index = 3;
        index2 = 0;
        strcpy(posicao, "Numero repetido na matriz 1 da coluna 0");
    }else if((indexI >= 6 && indexI <= 8) && (indexJ >=0 && indexJ <=2)){
        index = 6;
        index2 = 0;
        strcpy(posicao, "Numero repetido na matriz 2 da coluna 0");
    }else if((indexI >= 0 && indexI <= 2) && (indexJ >=3 && indexJ <=5)){
        index = 0;
        index2 = 3;
        strcpy(posicao, "Numero repetido na matriz 0 da coluna 1");
    }else if((indexI >= 3 && indexI <= 5) && (indexJ >=3 && indexJ <=5)){
        index = 3;
        index2 = 3;
        strcpy(posicao, "Numero repetido na matriz 1 da coluna 1");
    }else if((indexI >= 6 && indexI <= 8) && (indexJ >=6 && indexJ <=8)){
        index = 6;
        index2 = 3;
        strcpy(posicao, "Numero repetido na matriz 2 da coluna 1");
    }else if((indexI >= 0 && indexI <= 2) && (indexJ >=6 && indexJ <=8)){
        index = 0;
        index2 = 6;
        strcpy(posicao,"Numero repetido na matriz 0 da coluna 2");
    }else if((indexI >= 3 && indexI <= 5) && (indexJ >=6 && indexJ <=8)){
        index = 3;
        index2 = 6;
        strcpy(posicao, "Numero repetido na matriz 1 da coluna 2");
    }else if((indexI >= 6 && indexI <= 8) && (indexJ >=6 && indexJ <=8)){
        index = 5;
        index2 = 6;
        strcpy(posicao, "Numero repetido na matriz 2 da coluna 2");
    }
    int guardIndex = index2;
    for (int i = 0; i < 3; ++i) {
        index2 = guardIndex;
        for (int j = 0; j < 3; ++j) {
            if(index != indexI && indexJ != index2){
                if (lista[indexI][indexJ] == lista[index][index2]){
                    printf("%s! \n", posicao);
                    return 1;
                }
            }
            index2 += 1;
        }
        index += 1;
    }
    printf("Nenhum\n");
    return 0;
}

void write(int lista[9][9]){
    setlocale(LC_ALL, "portuguese");
    int indexI = 0;
    for (int i = 0; i < 9; ++i) {
        int indexJ = 0;
        for (int j = 0; j < 9; ++j) {
            if(lista[i][j] == 0){
                wprintf(L"Digite um valor entre 1 à 10 para a posição %d da coluna %d: \n", indexJ, indexI);
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
    printf("Fim de jogo, você conseguiu!");
}

 void main() {
     int lista[9][9];

     for (int i = 0; i < 9; ++i) {
         for (int j = 0; j < 9; ++j) {
             lista[i][j] = 0;
         }
     }

    lista[1][0] = 6;
    lista[4][0] = 1;
    lista[6][0] = 5;
    lista[7][0] = 3;

    lista[2][1] = 8;
    lista[6][1] = 1;
    lista[8][1] = 2;

    lista[0][2] = 1;
    lista[2][2] = 2;
    lista[4][2] = 8;
    lista[6][2] = 4;
    lista[7][2] = 7;

    lista[2][3] = 9;
    lista[3][3] = 8;
    lista[6][3] = 7;
    lista[7][3] = 2;

    lista[2][4] = 1;
    lista[6][4] = 3;
    lista[7][4] = 4;

    lista[0][5] = 2;
    lista[1][5] = 5;
    lista[2][5] = 6;
    lista[3][5] = 4;
    lista[8][5] = 1;

    lista[0][6] = 4;
    lista[3][6] = 5;
    lista[4][6] = 6;
    lista[5][6] = 8;
    lista[8][6] = 3;

    lista[1][7] = 1;
    lista[5][7] = 2;
    lista[6][7] = 6;
    lista[8][7] = 7;

    lista[0][8] = 6;
    lista[1][8] = 8;
    lista[4][8] = 9;
    lista[5][8] = 7;
    lista[6][8] = 2;
    print(lista);
    write(lista);
 }