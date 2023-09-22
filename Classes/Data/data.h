#include<iostream>
#ifndef DATA_H
#define DATA_H

using namespace std;

class Data{
    private:
        int day, month, year;

    public:
        Data();
        Data(int, int, int);
        ~Data(){}

        

        bool verify(int, int, int);
        Data operator ++ ();
        Data operator ++ (int);
        Data operator --();
        Data operator --(int);

        friend  ostream& operator << (ostream& out, Data& d){

            string _month[13]{" ", "Janeiro", "Fevereiro", "Março", "Abril",
                              "Maio", "Junho", "Julho", "Agosto","Setembro", 
                              "Outubro", "Novembro", "Dezembro"};

            out << d.day << "de " << _month[d.month] << "de " << d.year << "\n";

        }

        friend istream& operator >> (istream& in, Data& d){
            
            in >> d.day >> d.month >> d.year;
            

        }
};
#endif