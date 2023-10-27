#ifndef VIDEO_H
#define VIDEO_H
using namespace std;

#include <string>

class Video {
private:
    int id; // Identificador del video
    string nombre; // Nombre del video
    string genero; // Género del video
    int duracion; // Duración del video en minutos
    float calificacion; // Calificación del video

public:
    Video(); // Constructor predeterminado
    Video(int id, string nombre, string genero, int duracion, float calificacion); // Constructor con parámetros
    virtual ~Video(); // Destructor

    int getId() const; // Método getter para el identificador
    string getNombre() const; // Método getter para el nombre
    string getGenero() const; // Método getter para el género
    int getDuracion() const; // Método getter para la duración
    float getCalificacion() const; // Método getter para la calificación

    void setId(int id); // Método setter para el identificador
    void setNombre(string nombre); // Método setter para el nombre
    void setGenero(string genero); // Método setter para el género
    void setDuracion(int duracion); // Método setter para la duración
    void setCalificacion(float calificacion); // Método setter para la calificación

    virtual void muestra() const; // Método virtual para mostrar la información del video
};

#endif
