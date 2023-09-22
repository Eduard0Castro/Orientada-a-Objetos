#include <iostream>
#include "polinomio.h"

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