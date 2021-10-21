//
//  main.cpp
//  DondeMayor
//
//  Created by Carlos Botella Navarro on 21/10/21.
//
//------------------------------------------------
// Lista <R> --> dondeEstaElMayor() --> R
//------------------------------------------------
#include <iostream>
using namespace std;

int dondeEstaElMayor(int * p, int tam){ // Bucle para encontrar la posicion del mayor
    int mayor = 0;
    for (int i = 0; i < tam; i++) {
        if (p[mayor] < p[i]) {
            mayor = i;
        }
    }
    return mayor;
}
int main() {
    int lista[10] = {1,4,7,8,3,45,6,3,2,9};
    
    cout << dondeEstaElMayor(&lista[0], 10) << endl;
}
