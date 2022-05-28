#ifndef PELICULA_H
#define PELICULA_H

#include <Video.h>


class Pelicula : public Video
{
    public:
        //constructores
        Pelicula();
        Pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _oscares);

        //setters (m�todos de modificaci�n)
        void setOscares(int _oscares);

        //getters (m�todos de acceso)
        int getOscares();

        //otros m�todos
        string str();

    private:
        int oscares;
};

#endif // PELICULA_H
