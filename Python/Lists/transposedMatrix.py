def transposta(matriz):
    nova_matriz = []
    for i in range(len(matriz[0])):
        lista = []
        for j in range(len(matriz)):
            lista.append(matriz[j][i])
        nova_matriz.append(lista)
    return nova_matriz

matriz = []
linhas = int(input('Linhas: '))
colunas = int(input('Colunas: '))
for i in range(linhas):
    lista = []
    for j in range(colunas):
        lista.append(int(input()))
    matriz.append(lista)
print(transposta(matriz))
