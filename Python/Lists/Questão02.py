def maior_elemento(matriz):
    maior = 0
    for i in range(len(matriz)):
        for j in range(len(matriz[i])):
            if matriz[i][j] > maior:
                maior = matriz[i][j]
    return maior
def multiplica_pelo_maior(matriz):
    maior = maior_elemento(matriz)
    for i in range(len(matriz)):
        for j in range(len(matriz[i])):
            matriz[i][j] *= maior
    return matriz

matriz = []
dimensoes = int(input('Quantas dimensões terá a matriz: '))
for i in range(dimensoes):
    lista = []
    for j in range(dimensoes):
        lista.append(int(input()))
    matriz.append(lista)
print(multiplica_pelo_maior(matriz))
