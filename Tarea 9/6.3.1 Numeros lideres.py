numeros = [1, 65, 1, 1, 16, 5, 8, 6, 4]
lideres = []

mayor = -1
i = len(numeros) - 1

while i >= 0:
    if numeros[i] > mayor:
        lideres.insert(0, numeros[i])
        mayor = numeros[i]
    i -= 1

#Uso de IA para que la salida salga sin corchetes
print(*lideres)
