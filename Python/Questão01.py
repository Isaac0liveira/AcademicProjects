def soma_numero_impar(matriz):
    lista_impar = []
    for i in range(len(matriz)):
        for j in range(len(matriz[i])):
            if matriz[i][j] % 2 != 0:
                lista_impar.append(matriz[i][j])
    return sum(lista_impar)



matriz = []
dimensoes = int(input('Quantas dimensões terá a matriz: '))
for i in range(dimensoes):
    lista = []
    for j in range(dimensoes):
        lista.append(int(input()))
    matriz.append(lista)
print(soma_numero_impar(matriz))
