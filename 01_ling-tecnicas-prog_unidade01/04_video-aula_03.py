from os import system
system('clear')

x = 3
y = (x ** 2) + ((14 + 4) / 2) * 9 -10
y += 1
z = 'Lógica'
w = z + " Programação"
x -= 1
t = (x <= y) and (not(y != x)) == (y >= x)
k = not t or (x > y)

print(f'X = {x}, T = {t} e K = {k}')
