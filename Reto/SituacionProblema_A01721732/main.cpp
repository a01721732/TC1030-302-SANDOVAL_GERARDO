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

    //-------------

    //Declaraci�n de una serie default
    Serie serie1;

    //Declaraci�n de una serie con par�metros
    Serie serie2("003", "Historia Interesante", 300, "Biograf�a", 9.9);
    //Declaraci�n de los episodios para la serie con par�metros
    Episodio episodio1("Comienzo", 1, 9);
    serie2.setEpisodio(0, episodio1);

    Episodio episodio2("Desarrollo", 1, 7);
    serie2.setEpisodio(1, episodio2);

    Episodio episodio3("Final", 1, 8);
    serie2.setEpisodio(2, episodio3);

    // Probando la validaci�n
    Episodio episodioPrueba1("Prueba 1", 1, 1);
    Episodio episodioPrueba2("Prueba 2", 2, 2);
    //En este caso, el �ndice no es directamente consecutivo al pasado, as� que no se agrega el episodio
    serie2.setEpisodio(4, episodioPrueba1);

    //En este caso, s� se agrega el episodio, ya que es directamente consecutivo el �ndice
    serie2.setEpisodio(3,episodioPrueba2);
    //Este caso es igual que el pasado
    serie2.setEpisodio(4, episodioPrueba1);

    //En este caso, no se agrega el episodio porque la cantidad m�xima de episodios ya se alcanz� (5 episodios)
    serie2.setEpisodio(5, episodioPrueba2);

    //Desplegar serie1
    cout << serie1.str() << endl;

    //Desplegar serie2
    cout << serie2.str() << endl;
    //Calcular y desplegar la calificaci�n promedio de serie2
    cout << to_string(serie2.calculaCalPromedio()) << endl;
}
