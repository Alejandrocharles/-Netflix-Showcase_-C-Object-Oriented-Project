#include "Usuario.h"
#include <iostream>
using namespace std;

Usuario::Usuario() {
    contadorVideos = 0; // Constructor predeterminado inicializa el contador de videos en 0
}

string Usuario::getNombre() const {
    return nombre; // Retorna el nombre del usuario
}

void Usuario::setNombre(const string& nombre) {
    this->nombre = nombre; // Asigna un nuevo valor al nombre del usuario
}

string Usuario::getCuenta() const {
    return cuenta; // Retorna la cuenta del usuario
}

void Usuario::setCuenta(const string& cuenta) {
    this->cuenta = cuenta; // Asigna un nuevo valor a la cuenta del usuario
}

int Usuario::getContadorVideos() const {
    return contadorVideos; // Retorna el contador de videos del usuario
}

int Usuario::getUnIdMisVideos(int indice) const {
    if (indice >= 0 && indice < contadorVideos) {
        return misVideos[indice]; // Retorna el ID de video en el índice especificado
    }
    return -1; // Valor inválido para indicar que no se encontró el índice
}

void Usuario::operator+=(int idVideo) {
    if (contadorVideos < 20) {
        // Verificar si el video ya existe en el arreglo
        for (int i = 0; i < contadorVideos; i++) {
            if (misVideos[i] == idVideo) {
                return; // No se agrega si ya existe
            }
        }
        misVideos[contadorVideos] = idVideo; // Agrega el ID de video al arreglo
        contadorVideos++; // Incrementa el contador de videos
    }
}
