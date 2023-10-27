#include "pelicula.h"
#include <iostream>
using namespace std;

Pelicula::Pelicula() {
    // Constructor predeterminado vacío, utiliza el constructor predeterminado de la clase base (Video)
}

Pelicula::Pelicula(int id, string nombre, string genero, int duracion, float calificacion)
    : Video(id, nombre, genero, duracion, calificacion) {
    // Constructor con parámetros, utiliza el constructor con parámetros de la clase base (Video) para inicializar los miembros heredados
}

void Pelicula::muestra() const {
    // Muestra la información de la película
    cout << "\n" << "-- Pelicula --" << endl;
    Video::muestra(); // Llama al método muestra de la clase base (Video) para mostrar la información del video
}
