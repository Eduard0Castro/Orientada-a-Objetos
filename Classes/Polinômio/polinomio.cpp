#include <iostream>
#include "polinomio.h"

using namespace std;

Polinomio::Polinomio(){
    int number = 2;
    values = new double[number];
    values[0] = 1;
    values[1] = 1;
    

}

Polinomio::Polinomio(int n, double va){
    number = n;
    *values = va;
        
}

Polinomio Polinomio::operator+(Polinomio& p){
    Polinomio result;

    result.number = max(number, p.number);
  
    int h;
    for(h = 0; h < min(number, p.number); h++){
        result.values[h] = values[h] + p.values[h];

    }

    if(p.number > this->number){
        for(int i = h; i < p.number; i++){
            result.values[i] = p.values[i];
        }
    }

    else 
        
        for(int j = h; j < this->number; j++){
            result.values[j] = values[j];
        }

    return result;
}

Polinomio Polinomio::operator-(Polinomio& p){

    Polinomio result;
    result.number = max(number, p.number);
  
    int h;
    for(h = 0; h < min(number, p.number); h++){
        result.values[h] = values[h] - p.values[h];

    }

    if(p.number > this->number){
        for(int i = h; i < p.number; i++){
            result.values[i] = -p.values[i];
        }
    }

    else 
        
        for(int j = h; j < this->number; j++){
            result.values[j] = values[j];
        }

    return result;
}