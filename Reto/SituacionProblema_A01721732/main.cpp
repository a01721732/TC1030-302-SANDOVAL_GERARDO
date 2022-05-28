#include <iostream>
using namespace std;

#include "Video.h"
#include "Episodio.h"
#include "Pelicula.h"
#include "Serie.h"

int main()
{
    //Declaración de un video default
    Video video1;

    //Declaración de un video con parámetros
    Video video2("001", "Drama de los Rayados", 120, "Drama", -100);

    //Desplegar video1
    cout << video1.str() << endl;
    //Desplegar video2
    cout << video2.str() << endl;

    //-------------

    //Declaración de una película default
    Pelicula pelicula1;

    //Declaración de una película con parámetros
    Pelicula pelicula2("002", "El Regreso del Lechero", 120, "Acción", 10, 4);

    //Desplegar pelicula1
    cout << pelicula1.str() << endl;

    //Desplegar pelicula2
    cout << pelicula2.str() << endl;
}
