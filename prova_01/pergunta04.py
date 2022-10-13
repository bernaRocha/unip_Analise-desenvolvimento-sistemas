from os import system
system('clear')

preco_unitario = float(input("Digite o preço unitário: "))
quantidade = int(input(('Quantidade: ')))
preco_total = preco_unitario * quantidade * 1.25
print(f'O preço total é: {preco_total}')

