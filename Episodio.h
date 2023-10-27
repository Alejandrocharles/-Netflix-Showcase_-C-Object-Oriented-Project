#ifndef EPISODIO_H
#define EPISODIO_H
using namespace std;

#include "video.h"

class Episodio : public Video {
private:
    string tituloSerie; // Título de la serie
    int temporada; // Temporada del episodio
    int episodio; // Número del episodio

public:
    Episodio(); // Constructor predeterminado
    Episodio(int id, string nombre, string genero, int duracion, float calificacion,
             string tituloSerie, int temporada, int episodio); // Constructor con parámetros

    string getTituloSerie() const; // Método getter para el título de la serie
    int getTemporada() const; // Método getter para la temporada
    int getEpisodio() const; // Método getter para el número del episodio

    void setTituloSerie(string tituloSerie); // Método setter para el título de la serie
    void setTemporada(int temporada); // Método setter para la temporada
    void setEpisodio(int episodio); // Método setter para el número del episodio

    void muestra() const override; // Método de muestra sobreescrito
};

#endif
