#include <iostream>
#include <cmath>
#ifndef POINT_H
#define POINT_H
#define pi 3.141593

using namespace std;

class Point{

    protected:
        double x, y;

    public:

        Point(int xx = 0, int yy = 0): x(xx), y(yy){}
        virtual ~Point(){}

        virtual double area(){return 0;}
        virtual double volume(){return 0;}

        virtual void read(){
            cout << "Digite os pontos x e y: ";
            cin >> x >> y;}
        virtual void print(){cout << "(" << x << ", " << y << ")\n";}

        friend ostream& operator << (ostream&, Point&);
        friend istream& operator >> (istream&, Point&);
};

class Circle:public Point{

    protected: 
        int radius;

    public:
    
        Circle(double xx = 0, double yy = 0, int r = 0): Point(xx, yy), radius(r){}
        ~Circle(){}

        double area (){
            double a = pi*pow(radius, 2);
            return a;
        }

        double volume(){return 0;}

        void read(){
            Point::read();
            cout << "Digite o valor do raio do círculo: ";
            cin >> radius;
        }

        void print(){
            Point::print();
            cout << "Raio: " << radius << endl;
            }

};

class Cylinder:public Circle{
    protected:
        int altura;

    public:
        
        Cylinder(double xx = 0, double yy = 0, int r = 0, int alt = 0):Circle(xx, yy, r), altura(alt){}
        ~Cylinder(){}

        double area(){
            double part = Circle::area();
            double a = 2*part + (2*pi*radius*altura);
            return a;
        }

        double volume(){
            double v = pi*pow(radius, 2)*altura;
            return v;
        }

        void read(){
            Circle::read();
            cout << "Digite a altura do cilindro: ";
            cin >> altura;
        }

        void print(){
            Circle::print();
            cout << "Altura: " << altura << endl; 
        }

};


class Quadrado: public Point{
    protected:
        double l;

    public:

        Quadrado(double xx = 0, double yy = 0, double ll = 0):Point(xx, yy), l(ll){}
        ~Quadrado(){}

        double area(){
            double areia = l*l;
            return areia;
        }

        double volume(){
            return 0;
        }

        virtual void print(){
            Point::print();
        }
        virtual void read(){
            Point::read();
            cout << "Digite o comprimento do lado do quadrado: ";
            cin >> l;
        }


};

class Prisma:public Quadrado{
    protected:
        double altura;

    public:

        Prisma(double xx =0, double yy = 0, double ll = 0, double aa = 0): Quadrado(xx, yy, ll), altura(aa){}
        ~Prisma(){}

        double area(){
            double areia = 2*Quadrado::area() + 4*Quadrado::l*altura;
            return areia;
        }

        double volume(){
            double vol = Quadrado::area()*altura;
            return vol;
        }

        void print(){
            Quadrado::print();
            cout << "Altura: " << altura << "\n";
        }
        void read(){
            Quadrado::read();
            cout << "Digite a altura do prisma: ";
            cin >> altura;
        }

};

//Friends Point:
ostream& operator << (ostream& out, Point& p){
    p.print();
    return out;
}
istream& operator >> (istream& in, Point& p){
    p.read();
    return in;
}

#endif