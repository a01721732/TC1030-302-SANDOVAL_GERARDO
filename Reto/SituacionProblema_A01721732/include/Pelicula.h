#ifndef PELICULA_H
#define PELICULA_H

#include <Video.h>


class Pelicula : public Video
{
    public:
        //constructores
        Pelicula();
        Pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares);

        //setters (métodos de modificación)
        void setOscares(int _oscares);

        //getters (métodos de acceso)
        int getOscares();

        //otros métodos
        string str();

    private:
        int oscares;
};

#endif // PELICULA_H
