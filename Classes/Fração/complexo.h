#include <iostream>
#include <string.h>

#ifndef COMPLEXO_H
#define COMPLEXO_H

using namespace std;
class Complexo{
    private:
        double real;
        double img;
        static int count; //variável compartilhada por todos os objetos da classe

    public:

        Complexo();
        Complexo(double, double);
        ~Complexo();

        Complexo Soma(Complexo);
        Complexo operator+(Complexo);

        Complexo Sub(Complexo);
        Complexo operator-(Complexo&);

        Complexo Mult(Complexo);
        Complexo operator*(Complexo);

        Complexo Div(Complexo);
        Complexo operator/(Complexo);

        double get_real(){return real;}
        double get_img(){return img;}

        double modulo();
        void print();

        int how_many(){return count;}
        void teste (Complexo);

        //Operadores unários continuam sendo unários para as sobrecargas
        bool operator!();
        Complexo& operator ++();
        Complexo operator++(int);

        //Operadores para comparação de complexos:
        string operator<(Complexo);
        string operator>(Complexo);
        string operator<=(Complexo);
        string operator>=(Complexo);
        string operator==(Complexo);
        string operator!=(Complexo);

        
        //Função de conversão implícita de tipo:
        operator int();
        operator float();
   

        //Funções friends:
        
        friend void teste_friend(Complexo);

        //Sobrecarga de operadores de entrada e saída:
        friend ostream& operator << (ostream&, Complexo&);
        friend istream& operator >> (istream&, Complexo&);

};

#endif