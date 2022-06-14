#include "Series.h"
#include <fstream>
#include <sstream>

//constructores
Series::Series(){}

//Setters (métodos de modificación)
void Series::setPtrSerie(Serie *_serie)
{
    if (cantidad < 50)
    {
        arrPtrSeries[cantidad] = _serie;
        cantidad = cantidad + 1;
    }
}

void Series::setCantidadSeries(int _cantidad)
{
    cantidad = _cantidad;
}

//Getters (métodos de acceso)
Serie* Series::getPtrSerie(string sId)
{
    bool hay = false;

    for (int c = 0; c < cantidad; c++)
    {
        if (arrPtrSeries[c]->getId() == sId)
        {
            return arrPtrSeries[c];
            c = cantidad;
            hay = true;
        }
    }

    if (hay == false)
    {
        return nullptr;
    }
}

int Series::getCantidadSeries()
{
    return cantidad;
}

//otros métodos
void Series::leerArchivo()
{
    // Declaración de variables para usarlas al leer cada línea del archivo
    string linea, dato, row[6];
    // Variable para llevar el contador de cantidad de series leídas del archivo
    int iRow{}, iS{}, cantEpisodios{};
    // Declaración de variable para el archivo
    fstream lectura;
    Episodio *episodio;

    // ********************LEER LAS SERIES*********************
    lectura.open("C:/Users/Jerry/Documents/GitHub/TC1030-302-SANDOVAL_GERARDO/Reto/Serie2021.csv", ios::in);
    // inicializar el atributo cantidad de Series con 0
    cantidad = 0;
    // ciclo para leer todo el archivo
    while (getline(lectura, linea)) // lee una línea del archivo, corresponde a una serie
    {
        // Se manda desplegar para verificar que se está leyendo correctamente el archivo
        //cout << linea << endl; // SÓLO DESCOMENTAR PARA DEBUGGING
        std::stringstream registro(linea);
        iRow = 0;
        // ciclo para separar los elementos de la serie (string)
        while (getline(registro, dato, ',')) // separamos los elementos de la serie leída
        {
            //cout << dato << endl; // POSIBLEMENTE SE VA A BORRAR(???)
            row[iRow++] = dato;
        }
        // crear un objeto de la clase Serie, new retorna un pointer
        arrPtrSeries[cantidad] = new Serie(row[0], row[1], stoi(row[2]), row[3], stod(row[4]), 0);
        // para verificar si se inicializó correctamente el objeto
        //arrPtrSeries[cantidad]->str(); // SÓLO DESCOMENTAR PARA DEBUGGING
        // vamos por la siguiente serie del archivo, se incrementa para la siguiente
        cantidad++;
    }
    lectura.close();

    // ************LEER TODOS LOS EPISODIOS DE LAS SERIES******************
    lectura.open("C:/Users/Jerry/Documents/GitHub/TC1030-302-SANDOVAL_GERARDO/Reto/Episodio2021.csv", ios::in);
    // ciclo para leer todo el archivo
    while (getline(lectura, linea))
    {
        // Desplegar el episodio leído - sólo para corroborar
        //cout << linea << endl; // SÓLO DESCOMENTAR PARA DEBUGGING
        std::stringstream registro(linea);

        iRow = 0;
        while (getline(registro, dato, ',')) // separar los datos del episodio desde la línea registro
        {
            row[iRow++] = dato;
        } // al salir de aquí ya se separó toda la línea

        // iD - convertir int - sacar la posición de la serie 500 - 0, 501 - 1, 502
        iS = stoi(row[0]) - 500; // posición del arreglo donde está el ptr de la serie pertenece al episodio
        // Crear el Episodio
        episodio = new Episodio(row[1], stoi(row[2]), stod(row[3]));
        // Traer la cantidad de episodios de la serie iS - la 1a vez retorna 0
        cantEpisodios = arrPtrSeries[iS]->getCantidad();
        // verificar si todavía podemos añadir otro Episodio al arreglo
        if (cantEpisodios < 5)
        {
            arrPtrSeries[iS]->setEpisodio(cantEpisodios, *(episodio));
            arrPtrSeries[iS]->setCantidad(++cantEpisodios);
        }
        //cout << arrPtrSeries[iS]->str() << endl; // SÓLO DESCOMENTAR PARA DEBUGGING
    }
    lectura.close();

    // Desplegar todas las series con sus episodios
    // manda llamar al método str() de la clase Serie
    /*
    for (int iS = 0; iS < cantidad; iS++)
    {
        cout << arrPtrSeries[iS]->str() << endl;
    }
    */
}

void Series::reporteTodasLasSeries()
{
    for(int iR = 0; iR < cantidad; iR++)
    {
        //usando la sobrecarga del operador <<
        cout << iR << '-' << *arrPtrSeries[iR] << endl;
    }
}

void Series::reporteConCalificacion(double _calificacion)
{
    int countCal = 0;

    for (int indexRepCal = 0; indexRepCal < cantidad; indexRepCal++)
    {
        if (arrPtrSeries[indexRepCal]->calculaCalPromedio() == _calificacion)
        {
            cout << arrPtrSeries[indexRepCal]->str() << endl;
            countCal++;
        }
    }
}

void Series::reporteGenero(string _genero)
{
    int countGen = 0;

    for (int indexRepGen = 0; indexRepGen < cantidad; indexRepGen++)
    {
        if (arrPtrSeries[indexRepGen]->getGenero() == _genero)
        {
            //cout << arrPtrSeries[indexRepGen]->str() << endl; //como ahora está sobrecargado el operador "<<", no se tiene que hacer esto.
            cout << *arrPtrSeries[indexRepGen];
            countGen++;
        }
    }

    if (countGen == 0)
    {
        cout << "No hay series de ese género." << endl;
    }
}

void Series::calcularCalificacionSeries()
{
    int countRecal = 0;

    for (int indexRecal = 0; indexRecal < cantidad; indexRecal++)
    {
        arrPtrSeries[indexRecal]->setCalificacionPromedio(arrPtrSeries[indexRecal]->calculaCalPromedio());
    }
}
