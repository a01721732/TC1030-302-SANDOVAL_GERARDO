#include "Pelicula.h"

//constructores
Pelicula::Pelicula():Video()
{
    oscares = 0;
}
Pelicula::Pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares):Video(_iD, _titulo, _duracion, _genero, _calificacionPromedio)
{
    oscares = _oscares;
}

//setters (métodos de modificación)
void Pelicula::setOscares(int _oscares)
{
    oscares = _oscares;
}

//getters (métodos de acceso)
int Pelicula::getOscares()
{
    return oscares;
}

//otros métodos
string Pelicula::str()
{
    return iD + ", " + titulo + ", " + to_string(duracion) + ", " + genero + ", " + to_string(calificacionPromedio) + ", " + to_string(oscares);
}
