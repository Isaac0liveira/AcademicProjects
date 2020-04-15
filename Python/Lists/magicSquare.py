def quadrado_magico(matriz):
    for i in range(len(matriz)):
        print(matriz[i])
    diagonal_principal = []
    diagonal_secundaria = []
    soma_linhas = []
    soma_colunas = []
    quadrado_magico = False
    for i in range(len(matriz)):
        soma_linhas.append(sum(matriz[i]))
        lista_colunas = []
        for j in range(len(matriz[i])):
            lista_colunas.append(matriz[j][i])
        soma_colunas.append(sum(lista_colunas))
        diagonal_principal.append(matriz[i][i])
        diagonal_secundaria.append(matriz[i][-i -1])
    if soma_linhas.count(soma_linhas[0]) == len(soma_linhas):
        soma_linhas = soma_linhas[0]
    if soma_colunas.count(soma_colunas[0]) == len(soma_colunas):
        soma_colunas = soma_colunas[0]
    if soma_linhas == soma_colunas and soma_colunas == sum(diagonal_secundaria) and sum(diagonal_secundaria) == sum(diagonal_principal):
        quadrado_magico = True
    return quadrado_magico
matriz = []
dimensoes = int(input('Quantas dimensões terá a matriz: '))
for i in range(dimensoes):
    lista = []
    for j in range(dimensoes):
        lista.append(int(input()))
    matriz.append(lista)
print(quadrado_magico(matriz))
