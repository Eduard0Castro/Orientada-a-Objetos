#include <iostream>
using namespace std;
#ifndef PILHA_H
#define PILHA_H

class Pilha{
    private:
        int *dados;
        int topo;
        int size;

    public:
        Pilha(int memoria = 0);
        virtual ~Pilha();
        Pilha(const Pilha&);
        Pilha& operator = (const Pilha&);

        int pop(int &pop_to);
        int push(int push_this);

        friend ostream& operator << (ostream& out, Pilha& p){
            for(int i = 0; i < p.size; i++){
                out << p.dados[i] << " ";
            }
            return out;
        }

        friend istream& operator >> (istream &in, Pilha &p){
            int a;
            p.topo = -1;
            cout << "Entre com os dados da pilha" << endl;
            try{
                for (int i = 0; i < p.size; i++)
                {
                    cout << i+1 << "º: ";
                    in >> a;
                    p.push(a);
                }

                }
            catch (runtime_error & rt){
                cout << rt.what() << endl;
                }

            return in;

        }
};

#endif