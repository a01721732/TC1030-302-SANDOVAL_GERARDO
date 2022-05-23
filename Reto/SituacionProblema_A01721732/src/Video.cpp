#include "Video.h"


//constructores
Video::Video()
{
    iD = "000";
    titulo = "Título No Especificado";
    duracion = 0;
    genero = "Género No Especificado";
    calificacionPromedio = 0;
}

Video::Video(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio)
{
    iD = _iD;
    titulo = _titulo;
    duracion = _duracion;
    genero = _genero;
    calificacionPromedio = _calificacionPromedio;
}

//setters (métodos modificadores)
void Video::setId(string _iD){}
void Video::setTitulo(string _titulo){}
void Video::setDuracion(int _duracion){}
void Video::setGenero(string _genero){}
void Video::setCalificacionPromedio(double _calificacionPromedio){}

//getters (métodos de acceso)
string Video::getId()
{
    return iD;
}
string Video::getTitulo()
{
    return titulo;
}
int Video::getDuracion()
{
    return duracion;
}
string Video::getGenero()
{
    return genero;
}
double Video::getCalificacionPromedio()
{
    return calificacionPromedio;
}

//otros métodos
string Video::str()
{
    return iD + "," + titulo + "," + to_string(duracion) + "," + genero + "," + to_string(calificacionPromedio);
}

