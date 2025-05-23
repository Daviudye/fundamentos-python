nombre = input("Ingrese su nombre completo (2 nombres y 2 apellidos): ")

nombres = nombre.split()

print("El correo que se debe asignar al usuario ingresado es:")
print(nombres[0] + "." + nombres[2] + "@keyinstitute.edu.sv")

