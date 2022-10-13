from os import system
system('clear')

notas = []

while len(notas) < 5:
    nota = float(input("Registre a nota do aluno: "))
    notas.append(nota)

media = sum(notas) / len(notas)

print(f'A média do aluno é: {media}')
