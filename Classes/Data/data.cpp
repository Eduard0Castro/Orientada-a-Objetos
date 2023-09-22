#include <iostream>
#include "data.h"

using namespace std;

Data::Data(){
    day = 01;
    month = 01;
    year = 2023;
}

Data::Data(int d, int m, int y){
    bool verifica = verify(d, m, y);
    if(verifica == 1){
    day = d;
    month = m;
    year = y;
    }
    else {
        day = 1;
        month = 1;
        year = 2023;
    }
}

bool Data::verify(int d, int m, int y){
   
    if((0 < d < 32) && (1 <= m <= 1) && (y > 0)) return true;
    return false;

}

Data Data::operator ++(){
    
}

