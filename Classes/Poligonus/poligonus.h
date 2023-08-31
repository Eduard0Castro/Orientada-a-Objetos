#ifndef POLIGONUS_H
#define POLIGONUS_H

using namespace std;

class Poligonus{
    private: 
        int c, b;


    public:
        Poligonus();
        Poligonus(int, int);
        ~Poligonus();



        float area();
        int perimetro();
        string nome();


};


#endif