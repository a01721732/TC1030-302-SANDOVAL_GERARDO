#ifndef EPISODIO_H
#define EPISODIO_H

#include <iostream>
using namespace std;


class Episodio
{
    public:
        //constructores
        Episodio();
        Episodio(string _titulo, int _temporada, int _calificacion);

        //setters (métodos de modificación)
        void setTitulo(string _titulo);
        void setTemporada(int _temporada);
        void setCalificacion(int _calificacion);

        //getters (métodos de acceso)
        string getTitulo();
        int getTemporada();
        int getCalificacion();

        //otros métodos
        string str();

    private:
        string titulo;
        int temporada;
        int calificacion;
};

#endif // EPISODIO_H
