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
//Setters (métodos de modificación)
void Peliculas::setPtrPelicula(Pelicula *_pelicula)
{
    arrPtrPeliculas[cantidad] = _pelicula;
    cantidad = cantidad + 1;
}
void Peliculas::setCantidadPeliculas(int _cantidad)
{
    cantidad = _cantidad;
}

//Getters (métodos de acceso)
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

//otros métodos
void Peliculas::leerArchivo()
{
    //mejor usar método setPtrPelicula
    //setPtrPelicula con parámetros empezando desde new

    // fin - file input
    fstream fin;
    // Para almacenar los datos leídos
    string row[6];
    // line guarda la línea leída, y word guarda la palabra extraída de line
    string line, word;

    // Se abre el archivo de entrada
    fin.open("C:/Users/Jerry/Documents/GitHub/TC1030-302-SANDOVAL_GERARDO/Reto/Pelicula-1.csv", ios::in);

    // Se inicializa el atributo cantidad con 0
    cantidad = 0;
    // Se lee una línea del archivo y la almacena en line
    while (getline(fin,line))
    {
        // Se despliega en consola la línea (ESTO SE BORRA)
        cout << cantidad << line << endl;

        // Esto se usa para separar las palabras split()
        stringstream s(line);

        // lee cada dato de columna de una fila y se guarda en una variable tipo string, word
        int iR = 0;

        // Se extrae caracteres de s y se almacenan en word hasta que se encuentra el delimitador ','
        while (getline(s, word, ','))
        {
            // Se añade la word al arreglo row e incrementa iR para la próxima palabra
            row[iR++] = word;
        }

        // Operador new: crear un objeto del tipo Pelicula - mem dinamica - HEAP
        // stoi - funcion que convierte un string a un int
        // stod - funcion que convierte un string a un double
        setPtrPelicula(new Pelicula(row[0], row[1], stoi(row[2]), row[3], stod(row[4]), stoi(row[5])));

        // Se muestra en consola la separación (ESTO SE BORRA)
        cout << "iD: " << row[0] << "\n";
        cout << "Titulo: " << row[1] << "\n";
        cout << "Duracion: " << row[2] << "\n";
        cout << "Genero: " << row[3] << "\n";
        cout << "Calificacion: " << row[4] << "\n";
        cout << "Oscares: " << row[5] << "\n";

        // Se despliega en consola la película con el método str() de Pelicula (ESTO SE BORRA)
        //cout << "Dentro del objeto:" << arrPtrPeliculas[cantidad]->str() << endl;

        // Se incrementa el atributo cantidad para la siguiente película
        cantidad = cantidad + 1;
    }

    fin.close();

    // Se sale del ciclo cuando ya no existen más líneas en el archivo

    // Se despliegan todas las películas leídas (ESTO SE BORRA)
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

    cout << "Promedio de todas las calificaciones de las películas: " + to_string(sumaProm / cantidad) << endl;
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
