from os import system
system('clear')

nota01 = float(input('Nota 01: '))
nota02 = float(input('Nota 02: '))

media = (nota01 * 0.4) + (nota02 * 0.6)

print(f'A média é: {media}')