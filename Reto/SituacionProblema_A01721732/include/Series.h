#ifndef SERIES_H
#define SERIES_H

#include "Serie.h"

const int MAX_SERIES = 50;

class Series
{
    public:
        //constructores
        Series();

        //Setters (m�todos de modificaci�n)
        void setPtrSerie(Serie *_serie);
        void setCantidadSeries(int _cantidad);

        //Getters (m�todos de acceso)
        Serie *getPtrSerie(string sId);
        int getCantidadSeries();

        //otros m�todos
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
