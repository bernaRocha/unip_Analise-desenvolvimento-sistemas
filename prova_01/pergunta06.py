from os import system
system('clear')

numero = int(input('Digite um número de três digitos: '))
result01 = numero / 100
resto1 = numero % 100
result02 = resto1 / 10
resto2 = resto1 % 10
result03 = resto2 / 1

print(f'A inversão do número [{numero}] é: {int(result03)}{int(result02)}{int(result01)}')
