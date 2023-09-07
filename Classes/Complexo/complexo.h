#ifndef COMPLEXO_H
#define COMPLEXO_H

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
    Complexo Sub(Complexo);
    Complexo Mult(Complexo);
    Complexo Div(Complexo);

    double get_real(){return real;}
    double get_img(){return img;}

    double modulo();
    void print();

    int how_many(){return count;}

    

};

#endif