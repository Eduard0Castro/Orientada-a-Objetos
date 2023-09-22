#include <iostream>
#include "data.h"

using namespace std;

int Data::days[13]{
0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

Data::Data(){
    day = 01;
    month = 01;
    year = 2023;
}

Data::Data(int d, int m, int y){
    verify(d, m, y);

}

void Data::verify(int dd, int mm, int yy){
   
    if (mm >= 1 && mm <= 12)
        month = mm;
    else
        month = 1; 

    if (yy >= 1900 && yy <= 2100)
        year = yy;
    else
        year = 2021; 

    if ((month == 2 && anoBissexto(year) && dd >= 1 && dd <= 29) ||
    (dd >= 1 && dd <= days[month]))
        day = dd;
    else
        day = 1;

}

Data Data::operator ++(){
    increment();
    return *this;
}

Data Data::operator++(int d){
    
    Data inter = *this;
    increment();

    return inter;

}

bool Data::anoBissexto(int y){

    return y%4 == 0;
}

bool Data::theend(int d){

    if (month == 2 && anoBissexto(year)) {
        return d == 29; 
        }
    else {
        return d == days[month];
    }
}

Data Data::increment(){
    if(!theend(day)){
        day++;
    }

    else{
        if(month < 12){
            day = 1;
            month++;
        }

        else{
            month = 1;
            day = 1;
            year++;
        }
    }

    return *this;
}
