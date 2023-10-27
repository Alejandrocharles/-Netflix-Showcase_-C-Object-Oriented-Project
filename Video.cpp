#include "video.h"
#include <iostream>
using namespace std;

Video::Video() : id(0), duracion(0), calificacion(0.0) {
    // Constructor predeterminado inicializa los miembros con valores predeterminados
}

Video::Video(int id, string nombre, string genero, int duracion, float calificacion)
    : id(id), nombre(nombre), genero(genero), duracion(duracion), calificacion(calificacion) {
    // Constructor con parámetros asigna los valores recibidos a los miembros correspondientes
}

Video::~Video() {
    // Destructor vacío, no hay recursos dinámicos que liberar en esta clase
}

int Video::getId() const {
    return id; // Retorna el identificador del video
}

string Video::getNombre() const {
    return nombre; // Retorna el nombre del video
}

string Video::getGenero() const {
    return genero; // Retorna el género del video
}

int Video::getDuracion() const {
    return duracion; // Retorna la duración del video
}

float Video::getCalificacion() const {
    return calificacion; // Retorna la calificación del video
}

void Video::setId(int id) {
    this->id = id; // Asigna un nuevo valor al identificador del video
}

void Video::setNombre(string nombre) {
    this->nombre = nombre; // Asigna un nuevo valor al nombre del video
}

void Video::setGenero(string genero) {
    this->genero = genero; // Asigna un nuevo valor al género del video
}

void Video::setDuracion(int duracion) {
    this->duracion = duracion; // Asigna un nuevo valor a la duración del video
}

void Video::setCalificacion(float calificacion) {
    this->calificacion = calificacion; // Asigna un nuevo valor a la calificación del video
}

void Video::muestra() const {
    // Muestra la información del video en la salida estándar
    cout << "ID: " << id << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Genero: " << genero << endl;
    cout << "Duracion: " << duracion << " minutos" << endl;
    cout << "Calificacion: " << calificacion << endl;
}
