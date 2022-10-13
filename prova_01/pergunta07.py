from os import system
system('clear')

saldo = float(input('Qual o saldo: '))
total = saldo + (saldo * 5) / 100
print(f'O saldo atual com o rendimento de 5% é: {total}')
