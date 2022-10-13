from os import system
system('clear')

a = 1
b = 2
c = 3
d = 4

resultado = True or False

resultado = (a > b) and (b > c) or ((c + d * a) < (d - c * 2))

print(f'O resultado é: {resultado}')