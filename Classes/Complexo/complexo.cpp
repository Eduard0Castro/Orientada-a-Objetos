#include<iostream>
#include "complexo.h"
#include "cmath"
using namespace std;

int Complexo::count = 0;

Complexo::Complexo(){
    real = 1;
    img = 1;
    count ++;
}

Complexo::Complexo(double r, double i){
    real = r;
    img = i;
    count ++;
   
}

Complexo::~Complexo(){
    
    count --;
}

Complexo Complexo::Soma(Complexo comp){

    Complexo temp (get_real() + comp.get_real(), get_img() + comp.get_img());
    cout << "Soma: \n";
    temp.print();
    return temp;
}

Complexo Complexo::Sub(Complexo comp){
    
    Complexo temp (get_real() - comp.get_real(), get_img() - comp.get_img());
    return temp;
}

Complexo Complexo::Mult(Complexo comp){

    Complexo temp (get_real() * comp.get_real() - get_img() * comp.get_img(),
     get_real()*comp.get_img() + get_img()*comp.get_real());
     
    return temp;
}

Complexo Complexo::Div(Complexo comp){
    
    double a = (real*comp.real + img*comp.img)/(pow(comp.real , 2) + pow(comp.img, 2));
    double b = (comp.real *img  - real*comp.img )/(pow(comp.real, 2) + pow(comp.img, 2));
    Complexo temp (a, b);
    return temp;
}

double Complexo::modulo(){
    
    return sqrt(pow(get_real(), 2) + pow(get_img(), 2));

}

void Complexo::print(){
    cout << get_real();
    if (get_img() < 0) 
        cout << " " << get_img() <<"i" << endl;
    else    
        cout << " + " << get_img() << "i" << endl;
}











