empregado = 0
gasto_final = 0
while empregado < 20:
    salario_novo = float(input('Digite o valor do seu salário:'))
    gasto_final = gasto_final + salario_novo
    print('O gasto da empresa é', gasto_final)
    empregado = empregado + 1
    
    
