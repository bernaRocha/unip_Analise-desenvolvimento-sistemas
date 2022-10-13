from os import system
system('clear')

a = int(input('Digite o valor de a: '))
b = int(input('Digite o valor de b: '))
print(f'A = {a} e B = {b}')
print('Invertendo os valores de A e B ')
aux = a
a = b
b = aux
print(f'Agora temos A = {a} e B = {b}')
