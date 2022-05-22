#ifndef PAQUETE_H
#define PAQUETE_H

#include "Envio.h"


class Paquete : public Envio
{
    public:
        Paquete();
        Paquete(string _nombreRem, string _nombreDest, string _direccionRem, string _direccionDest, string _ciudadRem, string _ciudadDest, string _estadoRem, string _estadoDest, int _codPostalRem, int _codPostalDest, double _costoEstandar,
                double _largo, double _ancho, double _profundidad, double _peso, double costoPorKg);

        //getters
        double getLargo();
        double getAncho();
        double getProfundidad();
        double getPeso();
        double getCostoPorKg();

        //setters
        void setLargo(double);
        void setAncho(double);
        void setProfundidad(double);
        void setPeso(double);
        void setCostoPorKg(double);

        //otros métodos
        double calculaCosto();

    private:
        double largo;
        double ancho;
        double profundidad;
        double peso;
        double costoPorKg;
};

#endif // PAQUETE_H
