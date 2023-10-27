#include "episodio.h"
#include <iostream>
using namespace std;

Episodio::Episodio() : temporada(0), episodio(0) {
    // Constructor predeterminado inicializa los miembros adicionales con valores predeterminados
}

Episodio::Episodio(int id, string nombre, string genero, int duracion, float calificacion,
                   string tituloSerie, int temporada, int episodio)
    : Video(id, nombre, genero, duracion, calificacion),
      tituloSerie(tituloSerie), temporada(temporada), episodio(episodio) {
    // Constructor con parámetros utiliza el constructor con parámetros de la clase base (Video)
    // y asigna valores a los miembros adicionales
}

string Episodio::getTituloSerie() const {
    return tituloSerie; // Retorna el título de la serie del episodio
}

int Episodio::getTemporada() const {
    return temporada; // Retorna la temporada del episodio
}

int Episodio::getEpisodio() const {
    return episodio; // Retorna el número del episodio
}

void Episodio::setTituloSerie(string tituloSerie) {
    this->tituloSerie = tituloSerie; // Asigna un nuevo valor al título de la serie del episodio
}

void Episodio::setTemporada(int temporada) {
    this->temporada = temporada; // Asigna un nuevo valor a la temporada del episodio
}

void Episodio::setEpisodio(int episodio) {
    this->episodio = episodio; // Asigna un nuevo valor al número del episodio
}

void Episodio::muestra() const {
    // Muestra la información del episodio
    cout << "\n" << "-- Episodio --" << endl;
    Video::muestra(); // Llama al método muestra de la clase base (Video) para mostrar la información del video
    cout << "Titulo de la serie: " << tituloSerie << endl;
    cout << "Temporada: " << temporada << endl;
    cout << "Episodio: " << episodio << endl;
}
