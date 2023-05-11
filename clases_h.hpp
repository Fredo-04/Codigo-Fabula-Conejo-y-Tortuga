#pragma once
#include <iostream>
#include <string>
using namespace std;
class Conejo{
    public:
        int velocidad;
    Conejo(const int velocidad){
        this->velocidad=velocidad;
    }
    void presumir(){
        cout<<"soy el mas veloz\n";
    }
    void aceptarreto(){
        cout<<"acepto\n";
    }
    string getNombre(){
        return "conejo";
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
    Tortuga(const int _v):velocidad(_v){}
    void retar(){
        cout<<"Te reto conejo\n";
    }
    string getNombre(){
        return "tortuga";
    }
};
class Carrera{
    public:
        int distancia;
    Carrera(){
        distancia=8;
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
    void seduerme(int vel){
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