#ifndef PELICULAS_H
#define PELICULAS_H

#include "Pelicula.h"

const int MAX_PEL = 50;

class Peliculas
{
    public:
        //constructores
        Peliculas();

        //Setters (m�todos de modificaci�n)
        void setPtrPelicula(Pelicula *_pelicula);
        void setCantidadPeliculas(int _cantidad);

        //Getters (m�todos de acceso)
        Pelicula *getPtrPelicula(string _iD);
        int getCantidadPeliculas();

        //otros m�todos
        void leerArchivo();
        void reporteTodasLasPeliculas();
        void reporteConCalificacion(double _calificacionPromedio);
        void reporteGenero(string _genero);

    private:
        Pelicula *arrPtrPeliculas[MAX_PEL];
        int cantidad;
};

#endif // PELICULAS_H
