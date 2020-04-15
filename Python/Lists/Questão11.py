def tem_sobreposicao(lista_intervalos):
    checagem = False
    for i in range(len(lista_intervalos)):
        for j in range(1,len(lista_intervalos)):
           if lista_intervalos[i][0] < lista_intervalos[j][0] and lista_intervalos[i][1] > lista_intervalos[j][0]:
             checagem = True

    return checagem
matriz = []
linhas = int(input('Linhas: '))
colunas = int(input('Colunas: '))
for i in range(linhas):
    lista = []
    for j in range(colunas):
        lista.append(int(input()))
    matriz.append(lista)
print(tem_sobreposicao(matriz))