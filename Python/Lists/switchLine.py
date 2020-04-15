def troca_linhas(matriz, indice_lin1, indice_lin2):
    guarda_valor = matriz[indice_lin1]
    matriz[indice_lin1] = matriz[indice_lin2]
    matriz[indice_lin2] = guarda_valor
    return matriz
matriz = []
dimensoes = int(input('Quantas dimensões terá a matriz: '))
for i in range(dimensoes):
    lista = []
    for j in range(dimensoes):
        lista.append(int(input()))
    matriz.append(lista)
print(troca_linhas(matriz, 0, 2))
