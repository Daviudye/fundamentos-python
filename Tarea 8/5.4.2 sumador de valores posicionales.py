numero = int(input("Ingresa un número: "))

print("Proceso de reducción para:", numero)

while numero >= 10:
    suma = 0
    numero_texto = str(numero)
    
    for digito in numero_texto:
        suma = suma + int(digito)
    
    print(numero, "=", suma)
    numero = suma

print("El resultado final es:", numero)
