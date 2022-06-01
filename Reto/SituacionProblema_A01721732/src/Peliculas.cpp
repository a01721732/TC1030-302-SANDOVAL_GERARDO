#include "Peliculas.h"
#include <fstream>
#include <sstream>

//constructores
Peliculas::Peliculas()
{
   // cantidad = 0;
   // *arrPtrPeliculas[MAX_PEL];
}
/*
Peliculas::Peliculas(Pelicula *_arrPtrPeliculas[MAX_PEL], int _cantidad)
{
    cantidad = 0;
    *arrPtrPeliculas = *_arrPtrPeliculas;
}
*/
//Setters (m�todos de modificaci�n)
void Peliculas::setPtrPelicula(Pelicula *_pelicula)
{
    arrPtrPeliculas[cantidad] = _pelicula;
    cantidad = cantidad + 1;
}
void Peliculas::setCantidadPeliculas(int _cantidad)
{
    cantidad = _cantidad;
}

//Getters (m�todos de acceso)
Pelicula* Peliculas::getPtrPelicula(string sId)
{
    bool hay = false;

    for (int c = 0; c < cantidad; c++)
    {
        if (arrPtrPeliculas[c]->getId() == sId)
        {
            return arrPtrPeliculas[c];
            c = cantidad;
            hay = true;
        }
    }

    if (hay == false)
    {
        return nullptr;
    }
}

int Peliculas::getCantidadPeliculas()
{
    return cantidad;
}

//otros m�todos
void Peliculas::leerArchivo()
{
    //mejor usar m�todo setPtrPelicula
    //setPtrPelicula con par�metros empezando desde new

    // fin - file input
    fstream fin;
    // Para almacenar los datos le�dos
    string row[6];
    // line guarda la l�nea le�da, y word guarda la palabra extra�da de line
    string line, word;

    // Se abre el archivo de entrada
    fin.open("C:/Users/Jerry/Documents/GitHub/TC1030-302-SANDOVAL_GERARDO/Reto/Pelicula-1.csv", ios::in);

    // Se inicializa el atributo cantidad con 0
    cantidad = 0;
    // Se lee una l�nea del archivo y la almacena en line
    while (getline(fin,line))
    {
        // Se despliega en consola la l�nea (ESTO SE BORRA)
        cout << cantidad << line << endl;

        // Esto se usa para separar las palabras split()
        stringstream s(line);

        // lee cada dato de columna de una fila y se guarda en una variable tipo string, word
        int iR = 0;

        // Se extrae caracteres de s y se almacenan en word hasta que se encuentra el delimitador ','
        while (getline(s, word, ','))
        {
            // Se a�ade la word al arreglo row e incrementa iR para la pr�xima palabra
            row[iR++] = word;
        }

        // Operador new: crear un objeto del tipo Pelicula - mem dinamica - HEAP
        // stoi - funcion que convierte un string a un int
        // stod - funcion que convierte un string a un double
        setPtrPelicula(new Pelicula(row[0], row[1], stoi(row[2]), row[3], stod(row[4]), stoi(row[5])));

        // Se muestra en consola la separaci�n (ESTO SE BORRA)
        cout << "iD: " << row[0] << "\n";
        cout << "Titulo: " << row[1] << "\n";
        cout << "Duracion: " << row[2] << "\n";
        cout << "Genero: " << row[3] << "\n";
        cout << "Calificacion: " << row[4] << "\n";
        cout << "Oscares: " << row[5] << "\n";

        // Se despliega en consola la pel�cula con el m�todo str() de Pelicula (ESTO SE BORRA)
        //cout << "Dentro del objeto:" << arrPtrPeliculas[cantidad]->str() << endl;

        // Se incrementa el atributo cantidad para la siguiente pel�cula
        cantidad = cantidad + 1;
    }

    fin.close();

    // Se sale del ciclo cuando ya no existen m�s l�neas en el archivo

    // Se despliegan todas las pel�culas le�das (ESTO SE BORRA)
    /*
    for (int iR = 0; iR < cantidad; iR++)
    {
        cout << iR << "-" << arrPtrPeliculas[iR]->str() << endl;
    }
    */
}

void Peliculas::reporteTodasLasPeliculas()
{
    double sumaProm = 0;
    for (int indice = 0; indice < cantidad; indice++)
    {
        arrPtrPeliculas[indice]->str();
        sumaProm = sumaProm + arrPtrPeliculas[indice]->getCalificacionPromedio();
    }

    cout << "Promedio de todas las calificaciones de las pel�culas: " + to_string(sumaProm / cantidad) << endl;
}

void Peliculas::reporteConCalificacion(double _calificacion)
{
    for (int indexRepCal = 0; indexRepCal < cantidad; indexRepCal++)
    {
        if (arrPtrPeliculas[indexRepCal]->getCalificacionPromedio() == _calificacion)
        {
            arrPtrPeliculas[indexRepCal]->str();
        }
    }
}

void Peliculas::reporteGenero(string _genero)
{
    for (int indexRepGen = 0; indexRepGen < cantidad; indexRepGen++)
    {
        if (arrPtrPeliculas[indexRepGen]->getGenero() == _genero)
        {
            arrPtrPeliculas[indexRepGen]->str();
        }
    }
}
