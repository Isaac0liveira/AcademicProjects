def somasequencia(n):
    prox = 1
    if(n < 2):
       print ('Valor igual ou menor que 1, inválido.')
    else:
       while(prox < n):
         show = print(1 / (prox + 1))
         prox = prox + 1
       return show

n = int(input('Digite um número natural: '))
somasequencia(n)
