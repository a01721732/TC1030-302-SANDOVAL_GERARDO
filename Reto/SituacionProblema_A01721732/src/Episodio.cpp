#include "Episodio.h"

//constructores
Episodio::Episodio()
{
    titulo = "Título No Específicado";
    temporada = 0;
    calificacion = 0;
}
Episodio::Episodio(string _titulo, int _temporada, int _calificacion)
{
    titulo = _titulo;
    temporada = _temporada;
    calificacion = _calificacion;
}

//setters (métodos de modificación)
void Episodio::setTitulo(string _titulo)
{
    titulo = _titulo;
}
void Episodio::setTemporada(int _temporada)
{
    temporada = _temporada;
}
void Episodio::setCalificacion(int _calificacion)
{
    calificacion = _calificacion;
}

//getters (métodos de acceso)
string Episodio::getTitulo()
{
    return titulo;
}
int Episodio::getTemporada()
{
    return temporada;
}
int Episodio::getCalificacion()
{
    return calificacion;
}

//otros métodos
string Episodio::str()
{
    return titulo + "," + temporada + "," + calificacion;
}
