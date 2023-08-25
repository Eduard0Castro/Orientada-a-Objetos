#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo{

    private:
    int alt, larg;

    public:

    Retangulo();
    Retangulo(int = 10, int = 10);
    ~Retangulo();

    int perimetro();
    int area();
    void imprime();
    bool issquared();
    

};

#endif