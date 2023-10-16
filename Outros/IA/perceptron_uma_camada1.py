# Se trocarmos 1, por -1 ... O resultado da 0

entradas = [1, 7, 5]
pesos = [0.8, 0.1, 0]

def soma(entradas, pesos):
    s = 0
    for entrada, peso in zip(entradas, pesos):
        s += (entrada * peso)
    return s

s = soma(entradas, pesos)

def step_function(soma):
    if soma >= 1:
        return 1
    return 0

resultado = step_function(s)
print(resultado)
