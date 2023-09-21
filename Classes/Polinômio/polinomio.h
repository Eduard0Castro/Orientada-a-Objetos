#include<iostream>
#ifndef POLINOMIO_H
#define POLINOMIO_H

using namespace std;

class Polinomio{

    private: 
        int number;
        double *values;


    public:
        Polinomio();
        Polinomio(int, double);
        ~Polinomio(){}




        Polinomio operator+(Polinomio&);
        Polinomio operator-(Polinomio&);
    
        friend ostream& operator <<(ostream& out, Polinomio& n){
            for(int i = 0; i < n.number; i++){
                if(i != n.number - 1) out << n.values[i] << "x^" << i << " + ";
                else out << n.values[i] << "x^" << i << " = 0 ";
            
            }

            cout << "\n";

            return out;
        }

        friend istream& operator >> (istream& in, Polinomio& n){
            cout << "Polinomio: C0 + C1x1 + C2x2 + ... + Cnxn = 0\n";
            cout << "Digite o grau do polinomio que será apresentado: ";
            in >> n.number;
            for (int i = 0; i < n.number; i++){
            cout << "Digite o valor do C" << i <<  ": ";
            in >> n.values[i];
            }
            
            return in;
        }


};


#endif
