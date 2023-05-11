#pragma once
#include <iostream>
#include <string>
using namespace std;
class Conejo{
    public:
        string nom;
        int velocidad;
    Conejo(const string nom,const int velocidad){
        this->nom=nom;
        this->velocidad=velocidad;
    }
    void presumir(){
        cout<<"soy el mas veloz\n";
    }
    void aceptarreto(){
        cout<<"acepto\n";
    }
};
class Fauna{
    public:
        Fauna();
        void informar(){
            cout<<"tortuga, el conejo es muy presumido\n";
        }
};
class Tortuga{
    public:
        int velocidad;
        string expresion;
    Tortuga(const int _v):velocidad(_v){}
    void retar(){
        cout<<"Te reto conejo\n";
    }
};
class Carrera{
    public:
        int distancia;
    Carrera(){
        distancia=20;
    }
    void avanzar(const int velocidad){
        distancia=distancia-velocidad;
        cout<<"avanzó "<<velocidad<<endl;
    }
};
class Arbol{
    public:
        int menosvelocidad;
    Arbol(){
        menosvelocidad=0;
    }
    void modificarvelocidad(int vel){
        vel=menosvelocidad;
    }
};
class Meta{
    public:
        string ganador;
    Meta(const string ganador){
        this->ganador=ganador;
    }
    void terminocarrera(){
        cout<<ganador<<" terminó la carrera\n";
    }
};