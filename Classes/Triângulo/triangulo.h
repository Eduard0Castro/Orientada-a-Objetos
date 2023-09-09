#ifndef TRIANGULO_H
#define TRIANGULO_H

class Triangulo{

    private:
        int a, b, c;

    public:
    Triangulo();
    Triangulo(int, int, int);
    ~Triangulo(){}


    bool Verifica(int, int, int);
    void SomeTriangles();


};

#endif