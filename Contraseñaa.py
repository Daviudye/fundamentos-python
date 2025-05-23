contraseña = input("Ingrese la contraseña: ")

numeros = "0123456789"
mayusculas = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

tiene_numero = False
tiene_mayuscula = False

if len(contraseña) >= 8:
    for letra in contraseña:
        for num in numeros:
            if letra == num:
                tiene_numero = True
        for may in mayusculas:
            if letra == may:
                tiene_mayuscula = True

if len(contraseña) < 8:
    print("Contraseña inválida")
else:
    if tiene_numero == False:
        print("Contraseña inválida")
    else:
        if tiene_mayuscula == False:
            print("Contraseña inválida")
        else:
            print("Contraseña válida")
