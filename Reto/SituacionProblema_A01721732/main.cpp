#include <iostream>
using namespace std;

#include "Video.h"
#include "Episodio.h"

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
}
