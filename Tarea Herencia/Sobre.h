#ifndef SOBRE_H
#define SOBRE_H

#include "Envio.h"


class Sobre : public Envio
{
    public:
        Sobre();
        Sobre(string _nombreRem, string _nombreDest, string _direccionRem, string _direccionDest, string _ciudadRem, string _ciudadDest, string _estadoRem, string _estadoDest, int _codPostalRem, int _codPostalDest, double _costoEstandar,
              double _largoSobre, double _anchoSobre, double _cargoExtra);

        //getters
        double getLargoSobre();
        double getAnchoSobre();
        double getCargoExtra();

        //setters
        void setLargoSobre(double);
        void setAnchoSobre(double);
        void setCargoExtra(double);

        //otros métodos
        double calculaCosto();

    private:
        double largoSobre;
        double anchoSobre;
        double cargoExtra;
};

#endif // SOBRE_H
