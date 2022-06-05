#ifndef PELICULAS_H
#define PELICULAS_H

#include "Pelicula.h"

const int MAX_PEL = 50;

class Peliculas
{
    public:
        //constructores
        Peliculas();
        //Peliculas(Pelicula *_arrPtrPeliculas[MAX_PEL], int _cantidad);

        //Setters (métodos de modificación)
        void setPtrPelicula(Pelicula *_pelicula);
        void setCantidadPeliculas(int _cantidad);

        //Getters (métodos de acceso)
        Pelicula *getPtrPelicula(string sId);
        int getCantidadPeliculas();

        //otros métodos
        void leerArchivo();
        void reporteTodasLasPeliculas();
        void reporteConCalificacion(double _calificacion);
        void reporteGenero(string _genero);

    private:
        Pelicula *arrPtrPeliculas[MAX_PEL];
        int cantidad;
};

#endif // PELICULAS_H
