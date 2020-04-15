def maior_e_menor_elemento(linha):
    maior = linha[0]
    menor = linha[0]
    for i in range(len(linha)):
        if linha[i] > maior:
            maior = linha[i]
        if linha[i] < menor:
            menor = linha[i]
    return [maior, menor]

matriz = []
dimensoes = int(input('Quantas dimensões terá a matriz: '))
for i in range(dimensoes):
    lista = []
    for j in range(dimensoes):
        lista.append(int(input()))
    matriz.append(lista)
for i in range(len(matriz)):
    print(maior_e_menor_elemento(matriz[i]))
