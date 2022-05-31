#include "Peliculas.h"

//constructores
Peliculas::Peliculas(){}

//Setters (métodos de modificación)
void Peliculas::setPtrPelicula(Pelicula *_pelicula){}
void Peliculas::setCantidadPeliculas(int _cantidad){}

//Getters (métodos de acceso)
Pelicula Peliculas::*getPtrPelicula(string _iD){}
int Peliculas::getCantidadPeliculas(){}

//otros métodos
void Peliculas::leerArchivo()
{
    //mejor usar método setPtrPelicula
    //setPtrPelicula con parámetros empezando desde new
}
void Peliculas::reporteTodasLasPeliculas(){}
void Peliculas::reporteConCalificacion(double _calificacionPromedio){}
void Peliculas::reporteGenero(string _genero){}
