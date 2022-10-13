from os import system
system('clear')

salario_atual = float(input('Qual o salário atual: '))

if salario_atual <= 1800:
    novo_salario = salario_atual + (1.5 / 100 * salario_atual)
else:
    novo_salario = salario_atual + (2.0 / 100 * salario_atual)


print(f'O novo salário é de {novo_salario}')
