#include "Sobre.h"

Sobre::Sobre():Envio()
{
    //constructor
    largoSobre = 1;
    anchoSobre = 1;
    cargoExtra = 7;
}

Sobre::Sobre(string _nombreRem, string _nombreDest, string _direccionRem, string _direccionDest, string _ciudadRem, string _ciudadDest, string _estadoRem, string _estadoDest, int _codPostalRem, int _codPostalDest, double _costoEstandar,
              double _largoSobre, double _anchoSobre, double _cargoExtra) : Envio(_nombreRem, _nombreDest, _direccionRem, _direccionDest, _ciudadRem, _ciudadDest, _estadoRem, _estadoDest, _codPostalRem, _codPostalDest, _costoEstandar)
{
    largoSobre = _largoSobre;
    anchoSobre = _anchoSobre;
    cargoExtra = _cargoExtra;
}

//inicialización de los getters
double Sobre::getLargoSobre()
{
    return largoSobre;
}

double Sobre::getAnchoSobre()
{
    return anchoSobre;
}

double Sobre::getCargoExtra()
{
    return cargoExtra;
}

//inicialización de los setters
void Sobre::setLargoSobre(double _largoSobre)
{
    largoSobre = _largoSobre;
}

void Sobre::setAnchoSobre(double _anchoSobre)
{
    anchoSobre = _anchoSobre;
}

void Sobre::setCargoExtra(double _cargoExtra)
{
    cargoExtra = _cargoExtra;
}

//inicialización de otros métodos
double Sobre::calculaCosto()
{
    //Aquí, el condicional "if" checa se pasa de las dimensiones permitidas de 25x30, en ambas orientaciones (largo x ancho, y ancho x largo)
    if ((largoSobre > 25 && anchoSobre > 30) || (largoSobre > 30 && anchoSobre > 25))
    {
        return costoEstandar + cargoExtra;
    }
    else
    {
        return costoEstandar;
    }
}
