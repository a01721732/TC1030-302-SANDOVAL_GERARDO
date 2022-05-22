#ifndef ENVIO_H
#define ENVIO_H

#include <iostream>
using namespace std;

class Envio
{
    public:
        //constructor default y parámetros
        Envio();
        Envio(string _nombreRem, string _nombreDest, string _direccionRem, string _direccionDest, string _ciudadRem, string _ciudadDest, string _estadoRem, string _estadoDest, int _codPostalRem, int _codPostalDest, double _costoEstandar);
        //getters
        string getNombreRem();
        string getNombreDest();
        string getDireccionRem();
        string getDireccionDest();
        string getCiudadRem();
        string getCiudadDest();
        string getEstadoRem();
        string getEstadoDest();
        int getCodPostalRem();
        int getCodPostalDest();
        double getCostoEstandar();
        //setters
        void setNombreRem(string);
        void setNombreDest(string);
        void setDireccionRem(string);
        void setDireccionDest(string);
        void setCiudadRem(string);
        void setCiudadDest(string);
        void setEstadoRem(string);
        void setEstadoDest(string);
        void setCodPostalRem(int);
        void setCodPostalDest(int);
        void setCostoEstandar(double);
        //método para desplegar el costo
        double calculaCosto();

    protected:
        string nombreRem;
        string nombreDest;
        string direccionRem;
        string direccionDest;
        string ciudadRem;
        string ciudadDest;
        string estadoRem;
        string estadoDest;
        int codPostalRem;
        int codPostalDest;
        double costoEstandar;
};

#endif // ENVIO_H
