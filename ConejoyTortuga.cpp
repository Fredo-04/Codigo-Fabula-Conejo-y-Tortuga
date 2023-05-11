#include "clases_h.hpp"
#include <iostream>
#include <string>
using namespace std;
int main(){
    Conejo conejo(2);
    Tortuga tortuga(1);
    Fauna fauna;
    Arbol arbol;
    conejo.presumir();
    fauna.informar();
    tortuga.retar();
    conejo.aceptarreto();
    Carrera carcon;
    Carrera cartor;
    while(carcon.distancia!=0 || cartor.distancia!=0){
        carcon.avanzar(conejo.velocidad);
        cartor.avanzar(tortuga.velocidad);
        if(carcon.distancia<=4){
            arbol.seduerme(conejo.velocidad);
        }
    }
    if(carcon.distancia==0){
        Meta metacon(conejo.getNombre());
        metacon.terminocarrera();
    }
    else if (cartor.distancia==0)
    {
        Meta metator(tortuga.getNombre());
        metator.terminocarrera();
    }
    return 0;
}