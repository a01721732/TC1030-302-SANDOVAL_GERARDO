#include "Peliculas.h"

//constructores
Peliculas::Peliculas(){}

//Setters (m�todos de modificaci�n)
void Peliculas::setPtrPelicula(Pelicula *_pelicula){}
void Peliculas::setCantidadPeliculas(int _cantidad){}

//Getters (m�todos de acceso)
Pelicula Peliculas::*getPtrPelicula(string _iD){}
int Peliculas::getCantidadPeliculas(){}

//otros m�todos
void Peliculas::leerArchivo()
{
    //mejor usar m�todo setPtrPelicula
    //setPtrPelicula con par�metros empezando desde new
}
void Peliculas::reporteTodasLasPeliculas(){}
void Peliculas::reporteConCalificacion(double _calificacionPromedio){}
void Peliculas::reporteGenero(string _genero){}
