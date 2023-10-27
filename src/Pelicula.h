#ifndef PELICULA_H
#define PELICULA_H
using namespace std;

#include "video.h"

class Pelicula : public Video {
public:
    Pelicula(); // Constructor predeterminado
    Pelicula(int id, string nombre, string genero, int duracion, float calificacion); // Constructor con parámetros

    void muestra() const override; // Método de muestra sobreescrito
};

#endif
