#include "Episodio.h"

//constructores
Episodio::Episodio()
{
    titulo = "T�tulo No Espec�ficado";
    temporada = 0;
    calificacion = 0;
}
Episodio::Episodio(string _titulo, int _temporada, double _calificacion)
{
    titulo = _titulo;
    temporada = _temporada;
    calificacion = _calificacion;
}

//setters (m�todos de modificaci�n)
void Episodio::setTitulo(string _titulo)
{
    titulo = _titulo;
}
void Episodio::setTemporada(int _temporada)
{
    temporada = _temporada;
}
void Episodio::setCalificacion(double _calificacion)
{
    calificacion = _calificacion;
}

//getters (m�todos de acceso)
string Episodio::getTitulo()
{
    return titulo;
}
int Episodio::getTemporada()
{
    return temporada;
}
double Episodio::getCalificacion()
{
    return calificacion;
}

//otros m�todos
string Episodio::str() const
{
    return titulo + "," + to_string(temporada) + "," + to_string(calificacion);
}
