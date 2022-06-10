#ifndef SERIE_H
#define SERIE_H

#include <Video.h>
#include <Episodio.h>


class Serie : public Video
{
    public:
        //constructores
        Serie();
        Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacionPromedio, int _cantidad);

        //setters (métodos de modificación)
        void setEpisodio(int _index, Episodio _episodio);
        void setCantidad(int _cantidad);

        //getters (métodos de acceso)
        Episodio getEpisodio(int _index);
        int getCantidad();

        //otros métodos
        double calculaCalPromedio();
        string str();
        friend ostream &operator<<(ostream &out, const Serie &s);

    private:
        Episodio episodios[5];
        int cantidad;
};

#endif // SERIE_H
