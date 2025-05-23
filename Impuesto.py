unidades = int(input("Ingrese las unidades consumidas: "))

impuesto = 0

if unidades > 100:
    impuesto = (unidades - 100) * 0.70

print("El impuesto a pagar es: $" + str(impuesto))
