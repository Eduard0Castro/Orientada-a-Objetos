#include <iostream>
#ifndef POLITICAL_H
#define POLITICAL_H

using namespace std;

class Political{

    protected:
        string nome, cargo, partido;

    public:
        
      
        Political(string n = "", string c = "", string p = ""): nome(n), 
        cargo(c), partido(p){
            //cout << "Político construído" << "\n";
        }
        virtual ~Political(){
            //cout << "\nPolítico destruído\n";
        }

        virtual void print(){
            cout << "\n";
            cout << "Nome: " << nome << endl;
            cout << "Cargo: " << cargo << endl;
            cout << "Partido: " << partido << endl;
       
        }

        virtual void read(){
            cout << "Digite o nome do político: ";
            cin >> nome;

            cout << "Digite o cargo do político: ";
            cin >> cargo;

            cout << "Digite o partido do político: ";
            cin >> partido;

        }

        friend ostream& operator <<(ostream& out, Political& P){
            P.print();
            return out;
        }

        friend istream& operator >> (istream& in, Political& P){
            P.read();
            return in;
        }

};

class President: public Political{

    protected:
        string country;

    public:
        President(string n = "", string o = "", 
                  string p = "", string c = "" ): Political(n, o, p), country(c) {

            //cout << "Presidente construído" << endl;
        }

        ~President(){
            //cout << "\nPresidente destruído";
        }
        void print(){
            Political::print();
            cout << "País: " << country << endl;
        }

        void read(){
            Political::read();
            cout << "Digite o país do político: ";
            cin >> country;

        }
};

class Governor: public President{

    protected:
        string state;

    public:
        Governor(string n = "", string o = "", string p = "", 
                 string c = "", string s = ""):President(n, o, p, c), state(s){

           //cout << "Governador contruído" << "\n";
        }
        ~Governor(){
            //cout << "\nGovernador destruído";
        }

        void print(){
            President::print();
            cout << "Estado: " << state << endl;
        }

        void read(){
            President::read();
            cout << "Digite o estado do político: ";
            cin >> state;
        }
};

class Mayor: public Governor{
    protected:
        string town;

    public:
        
        Mayor(string n = "", string o = "", string p = "",
              string c = "", string s = "", string t = ""):Governor(n, o, p, c, s), town(t){

            //cout << "Prefeito construído" << "\n";
        }
        
        ~Mayor(){
            //cout << "\nPrefeito destruído";
        }

        void print(){
            Governor::print();
            cout << "Cidade: " << town << endl;
        }

        void read(){
            Governor::read();
            cout << "Digite o a cidade do político: ";
            cin >> town;
        }
};

#endif