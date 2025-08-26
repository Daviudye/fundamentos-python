#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Libro {
public:
    string titulo;
    string autor;
    int anioPublicacion;
    bool estaDisponible;

    Libro() : anioPublicacion(0), estaDisponible(true) {}

    void mostrarDetallesCompletos() {
        cout << "Titulo: " << titulo << endl;
        cout << "Autor: " << autor << endl;
        cout << "Anio de publicacion: " << anioPublicacion << endl;
        cout << "Disponible: " << (estaDisponible ? "Si" : "No") << endl;
        cout << "-------------------------" << endl;
    }
};

class Biblioteca {
private:
    vector<Libro> coleccion;
public:
    void agregarLibro(const Libro& nuevoLibro) {
        coleccion.push_back(nuevoLibro);
        cout << "Libro agregado con exito!" << endl;
    }

    void mostrarInventario() {
        if (coleccion.empty()) {
            cout << "No hay libros en el inventario." << endl;
        } else {
            for (size_t i = 0; i < coleccion.size(); i++) {
                coleccion[i].mostrarDetallesCompletos();
            }
        }
    }

    Libro* buscarLibro(const string& tituloBuscado) {
        for (size_t i = 0; i < coleccion.size(); i++) {
            if (coleccion[i].titulo == tituloBuscado) {
                return &coleccion[i];
            }
        }
        return nullptr;
    }

    void prestarLibro(const string& tituloPrestamo) {
        Libro* libro = buscarLibro(tituloPrestamo);
        if (libro != nullptr) {
            if (libro->estaDisponible) {
                libro->estaDisponible = false;
                cout << "El libro ha sido prestado." << endl;
            } else {
                cout << "El libro ya esta prestado." << endl;
            }
        } else {
            cout << "No se encontro el libro." << endl;
        }
    }

    void devolverLibro(const string& tituloDevolucion) {
        Libro* libro = buscarLibro(tituloDevolucion);
        if (libro != nullptr) {
            if (!libro->estaDisponible) {
                libro->estaDisponible = true;
                cout << "El libro ha sido devuelto." << endl;
            } else {
                cout << "El libro ya estaba disponible." << endl;
            }
        } else {
            cout << "No se encontro el libro." << endl;
        }
    }
};

int main() {
    Biblioteca miBiblioteca;
    int opcion = 0;

    Libro libroInicial;
    libroInicial.titulo = "El Hobbit";
    libroInicial.autor = "J.R.R. Tolkien";
    libroInicial.anioPublicacion = 1937;
    miBiblioteca.agregarLibro(libroInicial);

    while (opcion != 5) {
        cout << "\n--- BIBLIOTECA DIGITAL ---" << endl;
        cout << "1. Anadir libro" << endl;
        cout << "2. Mostrar inventario" << endl;
        cout << "3. Prestar libro" << endl;
        cout << "4. Devolver libro" << endl;
        cout << "5. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        if (opcion == 1) {
            Libro nuevoLibro;
            cout << "Ingrese el titulo: ";
            getline(cin, nuevoLibro.titulo);
            cout << "Ingrese el autor: ";
            getline(cin, nuevoLibro.autor);
            cout << "Ingrese el anio de publicacion: ";
            cin >> nuevoLibro.anioPublicacion;
            cin.ignore();
            miBiblioteca.agregarLibro(nuevoLibro);
        } 
        else if (opcion == 2) {
            miBiblioteca.mostrarInventario();
        } 
        else if (opcion == 3) {
            string titulo;
            cout << "Ingrese el titulo del libro a prestar: ";
            getline(cin, titulo);
            miBiblioteca.prestarLibro(titulo);
        } 
        else if (opcion == 4) {
            string titulo;
            cout << "Ingrese el titulo del libro a devolver: ";
            getline(cin, titulo);
            miBiblioteca.devolverLibro(titulo);
        } 
        else if (opcion == 5) {
            cout << "Saliendo del programa..." << endl;
        } 
        else {
            cout << "Opcion no valida." << endl;
        }
    }
    return 0;
}
