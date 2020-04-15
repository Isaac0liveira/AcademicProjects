def soma_diagonal(matriz):
    for i in range(len(matriz)):
        print(matriz[i])
    lista = []
    for i in range(len(matriz)):
        lista.append(matriz[i][-i -1])
    return sum(lista)
matriz = []
dimensoes = int(input('Quantas dimensões terá a matriz: '))
for i in range(dimensoes):
    lista = []
    for j in range(dimensoes):
        lista.append(int(input()))
    matriz.append(lista)
print(soma_diagonal(matriz))
