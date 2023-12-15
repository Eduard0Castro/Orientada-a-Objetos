#include <iostream>
#ifndef PONTO_H
#define PONTO_H

using namespace std;

class Ponto{

    private:
        int x, y;

    public:

        Ponto(){
            x = 0;
            y = 0;
        }
        Ponto(int _x = 0, int _y = 0){
            
            x = _x;
            y = _y;
        }

        ~Ponto(){}

        Ponto& operator++(){
            cout << "Pré";
            x += 1;
            y += 1;

            return *this;
        }

        Ponto operator++(int n){
            cout << "Pós";
            Ponto inter = *this;
            x++;
            y++;

            return inter;
        }

        friend ostream& operator << (ostream& out, Ponto& p){
            out << "(" << p.x << ", " << p.y << ")\n";

            return out;
        }

        friend istream& operator >> (istream& in, Ponto& p){

            in >> p.x >> p.y;
            return in;
        }

        void  operator = (Ponto p){
            this->x = p.x;
            this->y = p.y;
        }
};

#endif