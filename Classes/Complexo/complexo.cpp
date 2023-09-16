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
Complexo Complexo::operator+(Complexo n){
    Complexo result (get_real() + n.get_real(), get_img() + n.get_img());
    return result;

}

Complexo Complexo::Sub(Complexo comp){
    
    Complexo temp (get_real() - comp.get_real(), get_img() - comp.get_img());
    return temp;
}

Complexo Complexo::operator-(Complexo& n){
    Complexo result (get_real() - n.get_real(), get_img() - n.get_img());
    return result;
}

Complexo Complexo::Mult(Complexo comp){

    Complexo temp (get_real() * comp.get_real() - get_img() * comp.get_img(),
     get_real()*comp.get_img() + get_img()*comp.get_real());
     
    return temp;
}

Complexo Complexo::operator*(Complexo n){
    Complexo result (real * n.real - img * n.img, real*n.img + img*n.real);
    return result;
}

Complexo Complexo::Div(Complexo comp){
    
    double a = (real*comp.real + img*comp.img)/(pow(comp.real , 2) + pow(comp.img, 2));
    double b = (comp.real *img  - real*comp.img )/(pow(comp.real, 2) + pow(comp.img, 2));
    Complexo temp (a, b);
    return temp;
}

Complexo Complexo::operator/(Complexo n){
    Complexo result ((real*n.real + img*n.img)/(pow(n.real , 2) + pow(n.img, 2)),
    (n.real *img  - real*n.img )/(pow(n.real, 2) + pow(n.img, 2)));
    
    return result;
    
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

void Complexo::teste(Complexo comp){

    //Função teste para entender melhor certos aspectos..
    cout << comp.real << "\n";
    cout << comp.img << "\n";
    cout << comp.get_real() << "\n";
    cout << comp.get_img() << "\n";
}

bool Complexo::operator!(){
    if (real == 0 || img == 0) return true;
    return false;
}

//Pré incremento
Complexo& Complexo::operator++(){
    real +=1;
    img +=1;
    return *this;
}

//Pós incremento
Complexo Complexo::operator++(int n){
    Complexo inter;
    inter = *this;
    real += 1;
    img +=1;

    return inter;

}

//Conversão de tipo:
Complexo::operator int(){
    return sqrt(pow(real, 2) + pow(img, 2));
}

//Comparação de complexos:
string Complexo::operator<(Complexo n){
    if((int)*this < (int)n) return "Sim";
    return "Não";
}
string Complexo::operator>(Complexo n){
    if((int)*this > (int)n) return "Sim";
    return "Não";
}
string Complexo::operator<=(Complexo n){
    if((int)*this <= (int)n) return "Sim";
    return "Não";
}
string Complexo::operator>=(Complexo n){
    if((int)*this >= (int)n) return "Sim";
    return "Não";
}
string Complexo::operator==(Complexo n){
    if((this->real == n.real)&&(this->img == n.img)) return "Sim";
    return "Não";
}
string Complexo::operator!=(Complexo n){
    if((this->real != n.real)&&(this->img != n.img)) return "Sim";
    return "Não";
}
