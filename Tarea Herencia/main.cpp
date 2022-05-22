#include <iostream>
#include "Envio.h"
#include "Paquete.h"
#include "Sobre.h"

using namespace std;

int main()
{
    //el orden con el que se incluyen las variables al inicializar un objeto son tales: nombre del remitente, nombre del destinatario, direcci�n del remitente, direcci�n del destinatario,
    //ciudad del remitente, ciudad del destinatario, estado del remitente, estado del destinatario, c�digo postal del remitente, c�digo postal del destinatario, costo est�ndar.

    //Para Sobre, adem�s se especifican las siguientes variables en el siquiente orden: el largo del sobre, el ancho del sobre, y el cargo extra en caso de ser demasiado grande.
    //Para Paquete, adem�s se especifican las siguientes variables en el siguiente orden: el largo, el ancho, la profunidad, el peso, y el costo por kilogramo.


    //este primer caso muestra cuando un sobre est� dentro de las dimensiones permitidas. Tiene un costo est�ndar de 5, largo de 10, ancho de 20, y cargo extra de 10.
    Sobre cartaParaMama = Sobre("Ernesto", "Carla", "Calle Solemne", "Calle Sincera", "Monterrey", "Saltillo", "Nuevo Le�n", "Coahuila", 68954, 78493, 5, 10, 20, 10);
    cout << "Mandar esta primera carta tendr� un costo de " << cartaParaMama.calculaCosto() << endl;

    //este segundo caso muestra cuando un sobre se excede de las dimensiones permitidas. Tiene un costo est�ndar de 7.5, largo de 30, ancho de 40, y cargo extra de 14.
    Sobre cartaDeAgradecimiento = Sobre("Gerardo", "Emilio", "Calle Cercana", "Calle Lejana", "Monterrey", "San Antonio", "Nuevo Le�n", "Texas", 68023, 89324, 7.5, 30, 40, 14);
    cout << "Mandar esta segunda carta tendr� un costo de " << cartaDeAgradecimiento.calculaCosto() << endl;

    //este tercer caso muestra la declaraci�n de un paquete. Tiene un costo est�ndar de 20, un largo de 5.5, un ancho de 7, una profundidad de 8.4, un peso de 15.8, y un costo por kilogramo de 3.
    Paquete cajaImportante = Paquete("Marcelo", "Rogelio", "Calle Delgada", "Calle Amplia", "Monterrey", "Monterrey", "Nuevo Le�n", "Nuevo Le�n", 62854, 61845, 20, 5.5, 7, 8.4, 15.8, 3);
    cout << "Enviar este paquete tendr� un costo de " << cajaImportante.calculaCosto() << endl;

}
