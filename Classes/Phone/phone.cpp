#include <iomanip>
#include "phone.h"
using namespace std;


ostream &operator<<( ostream &output, const PhoneNumber &number )
{
    output << "(" << number.areaCode << ") "
            << number.exchange << "-" << number.line;
    return output; // enables cout << a << b << c;
} 


istream &operator>>( istream &input, PhoneNumber &number )
{
    input >> setw( 2 ) >> number.areaCode; // input area code
    input.ignore(); // skip ) and space
    input >> setw( 2 ) >> number.exchange; // input exchange
    input.ignore(); // skip dash (-)
    input >> setw( 9 ) >> number.line; // input line
    return input; // enables cin >> a >> b >> c;
} // end function operator>>