#include <iostream>
using namespace std;

#include "Video.h"
#include "Episodio.h"
#include "Pelicula.h"
#include "Serie.h"

int main()
{
    //Declaraci�n de un video default
    Video video1;

    //Declaraci�n de un video con par�metros
    Video video2("001", "Drama de los Rayados", 120, "Drama", -100);

    //Desplegar video1
    cout << video1.str() << endl;
    //Desplegar video2
    cout << video2.str() << endl;

    //-------------

    //Declaraci�n de una pel�cula default
    Pelicula pelicula1;

    //Declaraci�n de una pel�cula con par�metros
    Pelicula pelicula2("002", "El Regreso del Lechero", 120, "Acci�n", 10, 4);

    //Desplegar pelicula1
    cout << pelicula1.str() << endl;

    //Desplegar pelicula2
    cout << pelicula2.str() << endl;
}
