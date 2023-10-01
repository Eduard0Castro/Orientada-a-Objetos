#include <iostream>
#include "phone.h"
using namespace std;
int main()
{
    PhoneNumber phone; // create object phone
    
    cout << "Enter phone number in the form (55) 35-999689662:" << endl;
    // cin >> phone invokes operator>> by implicitly issuing
    // the global function call operator>>( cin, phone )
    cin >> phone;
    
    cout << "The phone number entered was: ";
    // cout << phone invokes operator<< by implicitly issuing
    // the global function call operator<<( cout, phone )
    cout << phone << endl;
    
} // end main