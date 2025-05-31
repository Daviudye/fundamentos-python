import random


numero_secreto = random.randint(1, 100)


adivinado = False

while not adivinado:
    intento = input("Adivina el numero secreto (entre 1 y 100): ")


    intento = int(intento)

    if intento < numero_secreto:
        print("El numero secreto es mayor.")
    elif intento > numero_secreto:
        print("El numero secreto es menor.")
    else:
        print("Felicidades! Has adivinado el numero secreto.")
        adivinado = True
