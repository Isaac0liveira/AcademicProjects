def ordena_intervalos(lista_intervalos):
    guarda_valor = None
    for i in range(len(lista_intervalos)):
        for j in range(len(lista_intervalos)):
            if lista_intervalos[i][0] < lista_intervalos[j][0]:
                guarda_valor = lista_intervalos[j]
                lista_intervalos[j] = lista_intervalos[i]
                lista_intervalos[i] = guarda_valor
    return lista_intervalos
matriz = []
linhas = int(input('Linhas: '))
colunas = int(input('Colunas: '))
for i in range(linhas):
    lista = []
    for j in range(colunas):
        lista.append(int(input()))
    matriz.append(lista)
print(ordena_intervalos(matriz))
