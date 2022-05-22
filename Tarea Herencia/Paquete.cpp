#include "Paquete.h"

Paquete::Paquete():Envio()
{
    //constructor
    largo = 1;
    ancho = 1;
    profundidad = 1;
    peso = 3;
    costoPorKg = 4;
}

Paquete::Paquete(string _nombreRem, string _nombreDest, string _direccionRem, string _direccionDest, string _ciudadRem, string _ciudadDest, string _estadoRem, string _estadoDest, int _codPostalRem, int _codPostalDest, double _costoEstandar,
                 double _largo, double _ancho, double _profundidad, double _peso, double _costoPorKg): Envio(_nombreRem, _nombreDest, _direccionRem, _direccionDest, _ciudadRem, _ciudadDest, _estadoRem, _estadoDest, _codPostalRem, _codPostalDest, _costoEstandar)
{
    largo = _largo;
    ancho = _ancho;
    profundidad = _profundidad;
    peso = _peso;
    costoPorKg = _costoPorKg;
}

//inicialización de los getters
double Paquete::getLargo()
{
    return largo;
}

double Paquete::getAncho()
{
    return ancho;
}

double Paquete::getProfundidad()
{
    return profundidad;
}

double Paquete::getPeso()
{
    return peso;
}

double Paquete::getCostoPorKg()
{
    return costoPorKg;
}


//inicialización de los setters
void Paquete::setLargo(double _largo)
{
    largo = _largo;
}

void Paquete::setAncho(double _ancho)
{
    ancho = _ancho;
}

void Paquete::setProfundidad(double _profundidad)
{
    profundidad = _profundidad;
}

void Paquete::setPeso(double _peso)
{
    peso = _peso;
}

void Paquete::setCostoPorKg(double _costoPorKg)
{
    costoPorKg = _costoPorKg;
}


//inicialización de otros métodos
double Paquete::calculaCosto()
{
    return costoEstandar + (peso * costoPorKg);
}
