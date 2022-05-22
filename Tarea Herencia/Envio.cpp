#include "Envio.h"

Envio::Envio()
{
    //constructor
    nombreRem = "";
    nombreDest = "";
    direccionRem = "";
    direccionDest = "";
    ciudadRem = "";
    ciudadDest = "";
    estadoRem = "";
    estadoDest = "";
    codPostalRem = 0;
    codPostalDest = 0;
    costoEstandar = 5;
}

Envio::Envio(string _nombreRem, string _nombreDest, string _direccionRem, string _direccionDest, string _ciudadRem, string _ciudadDest, string _estadoRem, string _estadoDest, int _codPostalRem, int _codPostalDest, double _costoEstandar)
{
    nombreRem = _nombreRem;
    nombreDest = _nombreDest;
    direccionRem = _direccionRem;
    direccionDest = _direccionDest;
    ciudadRem = _ciudadRem;
    ciudadDest = _ciudadDest;
    estadoRem = _estadoRem;
    estadoDest = _estadoDest;
    codPostalRem = _codPostalRem;
    codPostalDest = _codPostalDest;
    costoEstandar = _costoEstandar;

}

//getters
string Envio::getNombreRem()
{
    return nombreRem;
}

string Envio::getNombreDest()
{
    return nombreDest;
}

string Envio::getDireccionRem()
{
    return direccionRem;
}

string Envio::getDireccionDest()
{
    return direccionDest;
}

string Envio::getCiudadRem()
{
    return ciudadRem;
}

string Envio::getCiudadDest()
{
    return ciudadDest;
}

string Envio::getEstadoRem()
{
    return estadoRem;
}

string Envio::getEstadoDest()
{
    return estadoDest;
}

int Envio::getCodPostalRem()
{
    return codPostalRem;
}

int Envio::getCodPostalDest()
{
    return codPostalDest;
}

double Envio::getCostoEstandar()
{
    return costoEstandar;
}


//setters
void Envio::setNombreRem(string _nombreRem)
{
    nombreRem = _nombreRem;
}

void Envio::setNombreDest(string _nombreDest)
{
    nombreDest = _nombreDest;
}

void Envio::setDireccionRem(string _direccionRem)
{
    direccionRem = _direccionRem;
}

void Envio::setDireccionDest(string _direccionDest)
{
    direccionDest = _direccionDest;
}

void Envio::setCiudadRem(string _ciudadRem)
{
    ciudadRem = _ciudadRem;
}

void Envio::setCiudadDest(string _ciudadDest)
{
    ciudadDest = _ciudadDest;
}

void Envio::setEstadoRem(string _estadoRem)
{
    estadoRem = _estadoRem;
}

void Envio::setEstadoDest(string _estadoDest)
{
    estadoDest = _estadoDest;
}

void Envio::setCodPostalRem(int _codPostalRem)
{
    codPostalRem = _codPostalRem;
}

void Envio::setCodPostalDest(int _codPostalDest)
{
    codPostalDest = _codPostalDest;
}

void Envio::setCostoEstandar(double _costoEstandar)
{
    costoEstandar = _costoEstandar;
}


//otros métodos
double Envio::calculaCosto()
{
    return costoEstandar;
}
