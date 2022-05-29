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

    //-------------

    //Declaración de una serie default
    Serie serie1;

    //Declaración de una serie con parámetros
    Serie serie2("003", "Historia Interesante", 300, "Biografía", 9.9);
    //Declaración de los episodios para la serie con parámetros
    Episodio episodio1("Comienzo", 1, 9);
    serie2.setEpisodio(0, episodio1);

    Episodio episodio2("Desarrollo", 1, 7);
    serie2.setEpisodio(1, episodio2);

    Episodio episodio3("Final", 1, 8);
    serie2.setEpisodio(2, episodio3);

    // Probando la validación
    Episodio episodioPrueba1("Prueba 1", 1, 1);
    Episodio episodioPrueba2("Prueba 2", 2, 2);
    //En este caso, el índice no es directamente consecutivo al pasado, así que no se agrega el episodio
    serie2.setEpisodio(4, episodioPrueba1);

    //En este caso, sí se agrega el episodio, ya que es directamente consecutivo el índice
    serie2.setEpisodio(3,episodioPrueba2);
    //Este caso es igual que el pasado
    serie2.setEpisodio(4, episodioPrueba1);

    //En este caso, no se agrega el episodio porque la cantidad máxima de episodios ya se alcanzó (5 episodios)
    serie2.setEpisodio(5, episodioPrueba2);

    //Desplegar serie1
    cout << serie1.str() << endl;

    //Desplegar serie2
    cout << serie2.str() << endl;
    //Calcular y desplegar la calificación promedio de serie2
    cout << to_string(serie2.calculaCalPromedio()) << endl;
}
