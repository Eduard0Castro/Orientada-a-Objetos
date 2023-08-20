#include<iostream>

using namespace std;
void printInt(int n, int base);

int main ()
{
int n = 100;
int base = 2;
printInt(n, base);
}
void printInt( int n, int base )
{
char Array[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
'8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
if(n >= base)
    printInt(n/base, base);
cout << Array[ n % base ] ;
}