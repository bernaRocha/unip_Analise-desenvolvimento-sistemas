from os import system
system('clear')

x = int(input('Digite o primeiro valor: '))
y = int(input('Digite o segundo valor: '))
resultado01 = x + y
resultado02 = x - y
resultado03 = y / 2
resultado04 = (x + 2) * y

print(f'Os resultados das operações são: '
f'{resultado04}, {resultado03}, {resultado02} e {resultado01}')