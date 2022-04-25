#include <iostream>
using namespace std;
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <cstring>
#include "DFA.h"
using namespace std;

int main()
{
    vector<DFA> dfa;
    ifstream fileIn("test.txt");
    string line;
    string token, tipo;
    // Recorremos las lineas del archivo test.txt
    while (getline(fileIn,line)) { 
        // Guardamos los datos del archivo en su respectiva variable de acuerdo al orden

        stringstream ss(line);
        ss >> token >> tipo;



        // DFA _dfa(token, tipo);
        // dfa.push_back(_dfa);
    }

    // a var
    // = asig
    // b var
    // + suma
    // 4 entero
    // * mult
    // 3.3 real
    // ; puntuacion
    // //Hola Mundo comentario
    // a var
    // = asig
    // b var
    // + suma
    // 4 entero
    // * mult
    // 3.3 real
    // ; puntuacion
    // //Hola Mundo comentario
    // a var
    // = asig
    // b var
    // + suma
    // 4 entero
    // * mult
    // 3.3 real
    // ; puntuacion
    // //Hola Mundo comentario

    return 0;
}
