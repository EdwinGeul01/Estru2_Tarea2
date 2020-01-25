#include <iostream>
#include <fstream>
#include <time.h>
#include <iomanip>
#include <stdio.h>


using namespace std;

// lectura de archivo caracter por caracter

int main()
{

    fstream file;
    char filename[20];
    cout << "ingrese el archivo a leer : " << flush;
    cin >> filename;
	file.open(filename,ios::in);
    file.unsetf(ios::skipws);


    file.seekg(0, std::ios::end);
    int size = file.tellg();

    file.seekg(0);

    char ch[size];


    clock_t t_ini, t_fin;
    double secs;


    t_ini = clock();


    file.read(ch,size);


    cout << ch;
    cout << size;



    t_fin = clock();

    secs = (double)(t_fin - t_ini) / CLOCKS_PER_SEC;
    cout << "\n\ntiempo de ejecuion tomo al rededor de  : " << fixed << secs << setprecision(5) << "\n\n";


    file.close();

    system("pause");


    }