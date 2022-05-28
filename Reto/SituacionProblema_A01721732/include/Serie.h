#ifndef SERIE_H
#define SERIE_H

#include <Video.h>
#include <Episodio.h>


class Serie : public Video
{
    public:
        Serie();
        Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio );

    protected:

    private:
};

#endif // SERIE_H
