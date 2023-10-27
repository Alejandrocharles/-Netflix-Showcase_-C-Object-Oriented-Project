#include <iostream>
#include <fstream>
#include <vector>
#include "Video.h"
#include "Pelicula.h"
#include "Episodio.h"
#include "Usuario.h"
#include <iostream>

using namespace std;

int main() {
    vector<Video*> listaVideos(50); // Crear un vector de apuntadores a objetos de tipo Video
    Usuario usuario;
    string nombreArchivo;

    ifstream archivo("videos.txt"); // Abrir el archivo por default (videos.txt)

    string nuevoNombre, nuevaCuenta;
    cout << "\nIngrese el nombre del usuario: ";
    cin >> nuevoNombre;
    cout << "Ingrese la cuenta del usuario: ";
    cin >> nuevaCuenta;

    usuario.setNombre(nuevoNombre);
    usuario.setCuenta(nuevaCuenta);

    cout << "\n--- Datos del usuario ---" << endl;
    cout << "Nombre: " << usuario.getNombre() << endl;
    cout << "Cuenta: " << usuario.getCuenta() << endl;
    cout << "Lista de videos:" << endl;
    for (int i = 0; i < usuario.getContadorVideos(); i++) {
        int idVideo = usuario.getUnIdMisVideos(i);
        for (const Video* video : listaVideos) {
            if (video != nullptr && video->getId() == idVideo) {
                video->muestra(); // Mostrar información del video del usuario
            }
        }
    }
    
    //? En caso de que se quiera elegir el archivo de videos, descomentar lo siguiente:

    // cout << "Ingrese el nombre del archivo de videos: ";
    // cin >> nombreArchivo;

    // ifstream archivo(nombreArchivo); 

    // if (!archivo.is_open()) {
    //     cout << "No se pudo abrir el archivo." << endl;
    //     return 1;
    // }

    char tipoVideo;
    int idVideo, duracion, calificacion;
    string titulo, genero, tituloSerie;
    int episodio, temporada;
    int indice = 0;

    while (archivo >> tipoVideo >> idVideo >> titulo >> genero >> duracion >> calificacion) {
        // Leer información de cada video desde el archivo
        if (tipoVideo == 'p') {
            listaVideos[indice] = new Pelicula(idVideo, titulo, genero, duracion, calificacion);
        } else if (tipoVideo == 'e') {
            archivo >> tituloSerie >> episodio >> temporada;
            listaVideos[indice] = new Episodio(idVideo, titulo, genero, duracion, calificacion, tituloSerie, temporada, episodio);
        }
        indice++;
    }

    archivo.close(); // Cerrar el archivo después de leer los videos

    int opcion;

    do {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Consultar la lista de videos disponibles" << endl;
        cout << "2. Consultar la lista de videos por calificacion" << endl;
        cout << "3. Consultar la lista de videos por genero" << endl;
        cout << "4. Ver datos del usuario" << endl;
        cout << "5. Modificar el perfil del usuario" << endl;
        cout << "6. Agregar video a la lista del usuario" << endl;
        cout << "7. Terminar" << endl;

        cout << "\nSeleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                cout << "\n---- Lista de videos disponibles ----" << endl;
                for (const Video* video : listaVideos) {
                    if (video != nullptr) {
                        video->muestra(); // Mostrar información de todos los videos disponibles
                    }
                }
                break;
            }
            case 2: {
                int calificacionConsulta;
                cout << "\nIngrese la calificacion a consultar: ";
                cin >> calificacionConsulta;

                if (calificacionConsulta >= 1 && calificacionConsulta <= 5) {
                    cout << "\n--- Videos con calificacion " << calificacionConsulta << " ---" << endl;
                    for (const Video* video : listaVideos) {
                        if (video != nullptr && video->getCalificacion() == calificacionConsulta) {
                            video->muestra(); // Mostrar información de los videos con la calificación deseada
                        }
                    }
                } else {
                    cout << "\nCalificacion invalida. Debe ser un número entre 1 y 5." << endl;
                }
                break;
            }
            case 3: {
                string generoConsulta;
                cout << "\nIngrese el genero a consultar (Ciencia_Ficcion, Accion, Terror, Drama, Infantil, Romance): ";
                cin >> generoConsulta;

                cout << "\n--- Videos del genero " << generoConsulta << " ---" << endl;
                for (const Video* video : listaVideos) {
                    if (video != nullptr && video->getGenero() == generoConsulta) {
                        video->muestra(); // Mostrar información de los videos del género especificado
                    }
                }
                break;
            }
            case 4: {
                cout << "\n--- Datos del usuario ---" << endl;
                cout << "Nombre: " << usuario.getNombre() << endl;
                cout << "Cuenta: " << usuario.getCuenta() << endl;
                cout << "Lista de videos:" << endl;
                for (int i = 0; i < usuario.getContadorVideos(); i++) {
                    int idVideo = usuario.getUnIdMisVideos(i);
                    for (const Video* video : listaVideos) {
                        if (video != nullptr && video->getId() == idVideo) {
                            video->muestra(); // Mostrar información de los videos del usuario
                        }
                    }
                }
                break;
            }
            case 5: {
                string nuevoNombre, nuevaCuenta;
                cout << "\nIngrese el nuevo nombre del usuario: ";
                cin >> nuevoNombre;
                cout << "Ingrese la nueva cuenta del usuario: ";
                cin >> nuevaCuenta;

                usuario.setNombre(nuevoNombre);
                usuario.setCuenta(nuevaCuenta);
                cout << "\nPerfil de usuario modificado correctamente." << endl;
                break;
            }
            case 6: {
                int idVideoAgregar;
                cout << "\nIngrese el ID del video que desea agregar: ";
                cin >> idVideoAgregar;

                if (idVideoAgregar == 0) {
                    cout << "\nVolviendo al menú principal..." << endl;
                    break;
                }

                bool videoExistente = false;
                for (const Video* video : listaVideos) {
                    if (video != nullptr && video->getId() == idVideoAgregar) {
                        videoExistente = true;
                        break;
                    }
                }

                if (videoExistente) {
                    usuario += idVideoAgregar; // Agregar video a la lista del usuario
                    cout << "\nVideo agregado correctamente." << endl;
                } else {
                    cout << "\nEl video con ID " << idVideoAgregar << " no existe." << endl;
                }
                break;
            }
            case 7: {
                cout << "\nSaliendo del programa..." << endl;
                break;
            }
            default: {
                cout << "\nOpcion invalida. Intente nuevamente." << endl;
                break;
            }
        }
    } while (opcion != 7);

    // Liberar memoria de los objetos Video creados
    for (Video* video : listaVideos) {
        delete video;
    }

    return 0;
}
