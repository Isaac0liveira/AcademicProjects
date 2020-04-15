def identifica_indice(cidade, lista_cidades):
    verify = False
    for i in range(len(lista_cidades)):
        if verify:
            return menor_maior_distancia(lista_cidades[i:])
        if lista_cidades[i][0] == cidade:
            verify = True
def menor_maior_distancia(lista):
    print(lista)
    maior = 0
    menor = 0
    maior_valor = lista[0][1]
    for i in range(len(lista) - 1):
        if maior_valor < lista[i][1]:
            maior_valor = lista[i][1]
            maior = i
    if lista[maior][0] == lista[menor][0]:
        maior = lista[maior + 1][0]
        menor = lista[menor][0]
    else:
        maior = lista[maior][0]
        menor = lista[menor][0]
    return [menor, maior]
lista_cidades = []
cidades = int(input('Quantas cidades serão comparadas: '))
for i in range(cidades):
    lista = []
    for j in range(1):
        lista.append(input('Nome da cidade: '))
    lista_cidades.append(lista)
for i in range(len(lista_cidades) - 1):
    print('Digite a distancia de ', lista_cidades[i][0], 'para', lista_cidades[i + 1][0])
    lista_cidades[i].append(int(input()))
cidade = input('Digite a cidade a ser procurada: ')
print("A cidade menos e mais distantes, respectivamente, são:", identifica_indice(cidade,lista_cidades))

