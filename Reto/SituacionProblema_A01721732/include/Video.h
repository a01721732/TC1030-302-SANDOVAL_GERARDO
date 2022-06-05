#ifndef VIDEO_H
#define VIDEO_H

#include <iostream>
using namespace std;

class Video
{
    public:
        //constructores
        Video();
        Video(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio);

        //setters (métodos modificadores)
        void setId(string _iD);
        void setTitulo(string _titulo);
        void setDuracion(int _duracion);
        void setGenero(string _genero);
        void setCalificacionPromedio(double _calificacionPromedio);

        //getters (métodos de acceso)
        string getId();
        string getTitulo();
        int getDuracion();
        string getGenero();
        double getCalificacionPromedio();

        //otros métodos
        virtual string str();

    protected:
        string iD;
        string titulo;
        int duracion;
        string genero;
        double calificacionPromedio;
};

#endif // VIDEO_H
