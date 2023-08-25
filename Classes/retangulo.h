#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo{

    private:
    int alt, larg;

    public:
    Retangulo();
    Retangulo(int a, int l);
    ~Retangulo();

    int perimetro();
    int area();
    void imprime();
    bool issquare();
    void atributos();
    

};

#endif