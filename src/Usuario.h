#ifndef USUARIO_H
#define USUARIO_H
using namespace std;

#include <string>

class Usuario {
private:
    string nombre; // Nombre del usuario
    string cuenta; // Cuenta del usuario
    int misVideos[20]; // Arreglo para almacenar los IDs de los videos del usuario
    int contadorVideos; // Contador de videos almacenados

public:
    Usuario(); // Constructor predeterminado
    
    // Métodos de acceso y modificación para los atributos nombre y cuenta
    string getNombre() const;
    void setNombre(const string& nombre);
    string getCuenta() const;
    void setCuenta(const string& cuenta);
    
    int getContadorVideos() const; // Método getter para el contador de videos
    int getUnIdMisVideos(int indice) const; // Método getter para obtener un ID de video del arreglo
    void operator+=(int idVideo); // Sobrecarga del operador += para agregar un ID de video al arreglo
};

#endif
