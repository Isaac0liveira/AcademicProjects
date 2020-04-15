def inverter_linhas(matriz):
    nova_matriz = []
    for i in range(len(matriz)):
        lista = []
        for j in range(len(matriz[i])):
            lista.append(matriz[i][-j - 1])
        nova_matriz.append(lista)
    return nova_matriz
matriz = []
dimensoes = int(input('Quantas dimensões terá a matriz: '))
for i in range(dimensoes):
    lista = []
    for j in range(dimensoes):
        lista.append(int(input()))
    matriz.append(lista)
print(inverter_linhas(matriz))
