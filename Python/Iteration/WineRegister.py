loop = 1
while(loop > 0):
    vinho = input('Digite o tipo de vinho: ')
    if(vinho == 'T'):
        print('Vinho cadastrado sendo Vinho Tinto. Deseja encerrar o programa? (Digite Sim ou Não)')
        encerra = input()
        if(encerra == 'Sim'):
            break
        elif(encerra == 'Não'):
            print('Continue')
        else:
            print('Opção inválida')
    elif(vinho == 'B'):
        print('Vinho cadastrado sendo Vinho Branco. Deseja encerrar o programa? (Digite Sim ou Não)')
        encerra = input()
        if (encerra == 'Sim'):
            break
        elif (encerra == 'Não'):
            print('Continue')
        else:
            print('Opção inválida')
    elif(vinho == 'R'):
        print('Vinho cadastrado sendo Vinho Rosê. Deseja encerrar o programa? (Digite Sim ou Não)')
        encerra = input()
        if (encerra == 'Sim'):
            break
        elif (encerra == 'Não'):
            print('Continue')
        else:
            print('Opção inválida')
    else:
        print('Opção inválida')
