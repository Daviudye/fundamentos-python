
def eliminar_duplicados(lista):
    resultado = []
    duplicados = []
    for i in lista:
        if i not in duplicados:
            resultado.append(i)
            duplicados.append(i)
    return resultado


lista_original = [1, 8, 1, 1, 6, 5, 6, 8, 8, 4]
lista_sin_duplicados = eliminar_duplicados(lista_original)
print(' '.join(str(num) for num in lista_sin_duplicados))