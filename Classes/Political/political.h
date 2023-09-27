#include <iostream>
#ifndef POLITICAL_H
#define POLITICAL_H

using namespace std;

class Political{

    protected:
        string nome, cargo, partido;

    public:
        
      
        Political(string n, string c, string p): nome(n), 
        cargo(c), partido(p){
            cout << "Político construído" << "\n";
        }
        ~Political(){}

        void print(){
            cout << "Nome: " << nome << endl;
            cout << "Cargo: " << cargo << endl;
            cout << "Partido: " << partido << endl;
       
        }

};

class President: public Political{

    protected:
        string country;

    public:
        President(string n, string o, string p, string c ): Political(n, o, p), country(c) {
            cout << "Presidente construído" << endl;
        }

        ~President(){}
        void print(){
            
            cout << "\n";
            Political::print();
            cout << "País: " << country << endl;
            
        }
};

class Governor: public President{

    protected:
        string state;

    public:
        Governor(string n, string o, string p, string c, string s):President(n, o, p, c), state(s){
            cout << "Governador contruído" << "\n";
        }
        ~Governor(){}

        void print(){
            
            President::print();
            cout << "Estado: " << state << endl;
        }
};

class Mayor: public Governor{
    protected:
        string town;

    public:
        
        Mayor(string n, string o, string p, string c, string s, string t):Governor(n, o, p, c, s), town(t){
            cout << "Prefeito construído" << "\n";
        }
        
        ~Mayor(){}

        void print(){
            
            Governor::print();
            cout << "Cidade: " << town << endl;
            cout << "\n";
            

        }

};

#endif