#ifndef SERIES_H
#define SERIES_H

#include "Serie.h"

const int MAX_SERIES = 50;

class Series
{
    public:
        //constructores
        Series();

        //Setters (métodos de modificación)
        void setPtrSerie(Serie *_serie);
        void setCantidadSeries(int _cantidad);

        //Getters (métodos de acceso)
        Serie *getPtrSerie(string sId);
        int getCantidadSeries();

        //otros métodos
        void leerArchivo();
        void reporteTodasLasSeries();
        void reporteConCalificacion(double _calificacion);
        void reporteGenero(string _genero);
        void calcularCalificacionSeries();

    private:
        Serie *arrPtrSeries[MAX_SERIES];
        int cantidad;
};

#endif // SERIES_H
