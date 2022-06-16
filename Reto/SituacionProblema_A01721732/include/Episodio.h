#ifndef EPISODIO_H
#define EPISODIO_H

#include <iostream>
using namespace std;


class Episodio
{
    public:
        //constructores
        Episodio();
        Episodio(string _titulo, int _temporada, double _calificacion);

        //setters (métodos de modificación)
        void setTitulo(string _titulo);
        void setTemporada(int _temporada);
        void setCalificacion(double _calificacion);

        //getters (métodos de acceso)
        string getTitulo();
        int getTemporada();
        double getCalificacion();

        //otros métodos
        string str() const;

    private:
        string titulo;
        int temporada;
        double calificacion;
};

#endif // EPISODIO_H
