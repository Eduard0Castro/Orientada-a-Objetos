#include <iostream>
#include "polinomio.h"
#include <cmath>
#include <exception>
#include <stdexcept>

using namespace std;

Polinomio::Polinomio(){
    int number = 2;
    values = new double[number];
    values[0] = 1;
    values[1] = 1;
}

Polinomio::Polinomio(int grau)
{
    number = grau;
    values = new double[number];
    for(int i = 0; i < number; i++)
        values[i] = 1;
}

Polinomio::Polinomio(const Polinomio& p)
{
    number = p.number;
    values = new double[number];
    for(int i = 0; i < p.number; i++)
    {
        values[i] = p.values[i];
    }
}



Polinomio Polinomio::operator+(Polinomio& p){
    Polinomio result(max(number, p.number));
    int mini = min(number, p.number);
  
    int h;
    for(h = 0; h < mini; h++){
        result.values[h] = values[h] + p.values[h];

    }

    if(p.number > this->number){
        for(int i = mini; i < p.number; i++){
            result.values[i] = p.values[i];
        }
    }

    else 
        
        for(int j = mini; j < this->number; j++){
            result.values[j] = values[j];
        }

    return result;
}

Polinomio Polinomio::operator-(Polinomio& p){
    Polinomio result(max(number, p.number));

    int mini = min(number, p.number);
    int h;
  
    for(h = 0; h < mini; h++){
        result.values[h] = values[h] - p.values[h];
    }

    if(p.number > this->number){
        for(int i = mini; i < p.number; i++){
            result.values[i] = -p.values[i];
        }
    }
    else{
        for(int j = mini; j < number; j++){
            result.values[j] = values[j];
        }
    }

    return result;
}

Polinomio Polinomio::operator=(const Polinomio& p){
    
    number = p.number;
    delete [] values;
    values = new double[number];
    for(int i = 0; i < p.number; i++)
    {
        values[i] = p.values[i];
    }

    return *this;
}

double Polinomio::operator[](int index){
    if ((index > number - 1) || (index <= 0)){
        throw out_of_range("Indíce inválido para o polinômio!");
    }
    else
        return values[index];
}

Polinomio Polinomio::deriva(){
    Polinomio derivada(number -1);
    
    for(int i = 1;i < number; i++){
        derivada.values[i-1] = i*values[i];
    }

    return derivada;
}

float Polinomio::calcula(float ponto){
    
    float result = 0;
    for(int i = 0; i < number; i++){
        result += values[i]*pow(ponto, i);
    }
    return result;
}

float Polinomio::NewtonsMethod(float Xo, int m){

    Polinomio copia(*this);
    float result;
    
    Polinomio derivada = copia.deriva();

    for(int i = 0; i < m; i++){
        result = Xo - (copia.calcula(Xo)/derivada.calcula(Xo));
        Xo = result;
    }

    return result;

}