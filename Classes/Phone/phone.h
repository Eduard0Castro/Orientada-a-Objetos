// Fig. 11.3: PhoneNumber.h
// PhoneNumber class definition
#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include <iostream>
#include <string>
using namespace std;
class PhoneNumber{

    friend ostream &operator<<( ostream &, const PhoneNumber & );
    friend istream &operator>>( istream &, PhoneNumber & );

    private:

        string areaCode; // 2-digit area code
        string exchange; // 2-digit exchange
        string line; // 9-digit line

}; // end class PhoneNumber
#endif