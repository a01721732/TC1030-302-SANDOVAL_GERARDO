#include "Serie.h"

//constructores
Serie::Serie()
{
    cantidad = 0;
}
Serie::Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int cantidad):Video(_iD, _titulo, _duracion, _genero, _calificacionPromedio)
{
    cantidad = 0;
}

//setters (métodos de modificación)
void Serie::setEpisodio(int _index, Episodio _episodio)
{
    //Primero se valida que el índice dado sea correcto (_index >= 0 && _index <= cantidad && cantidad < 5).
    //La segunda condición es para que los episodios se inscriban en orden (que no se registre el episodio 4 justo después del 1, por ejemplo).
    //La variable "cantidad" además se usa para otros métodos, como "calculaCalPromedio" y "str".
    //Si no cumple con los requisitos, no hay cambio
    if (_index >= 0 && _index <= cantidad && cantidad < 5)
    {
        episodios[_index] = _episodio;
        cantidad = cantidad + 1;
    }

}

void Serie::setCantidad(int _cantidad)
{
    cantidad = _cantidad;
}

//getters (métodos de acceso)
Episodio Serie::getEpisodio(int _index)
{
    return episodios[_index];
}

int Serie::getCantidad()
{
    return cantidad;
}

//otros métodos
double Serie::calculaCalPromedio()
{
    double acum = 0;
    for (int index = 0; index < cantidad; index++)
    {
        acum = acum + episodios[index].getCalificacion();
    }

    if (cantidad > 0)
    {
        return acum / cantidad;
    }
    else
    {
        return 0;
    }
}

string Serie::str()
{
    //Primero se concatenan todos los episodios
    string acum = "";
    for (int index = 0; index < cantidad; index++)
    {
        acum = acum + episodios[index].str() + "\n";
    }

    return iD + ", " + titulo + ", " + to_string(duracion) + ", " + genero + ", " + to_string(calificacionPromedio) + "\n" + acum;
}

ostream &operator<<(ostream &out, const Serie &s)
{
    string acum = "\n";
    for(int index = 0; index < s.cantidad; index++)
    {
        acum = acum + to_string(index) + '-' + s.episodios[index].str() + '\n';
    }

    out << s.iD << ',' << s.titulo << ',' << s.duracion << ',' << s.genero << ',' << s.calificacionPromedio << acum;

    return out;
}
