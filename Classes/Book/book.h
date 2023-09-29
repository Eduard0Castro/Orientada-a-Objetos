#include<iostream>
#ifndef BOOK_H
#define BOOK_H

using namespace std;

class Book {

    private:
        string title, author, company, genre;

    public:

        Book();
        Book(string, string, string, string);
        ~Book(){}

        string getTitle();
        string getAuthor();
        string getCompany();
        string getGenre();

        void setTitle(string);
        void setAuthor(string);
        void setCompany(string);
        void setGenre(string);

        friend ostream& operator << (ostream& out, Book& b){
            out << "\nTítulo: " << b.title << "\nAutor: " << b.author << "\nEditora: " << b.company 
                << "\nGênero: " << b.genre << "\n";

            return out;
        }

        friend istream& operator >> (istream& in, Book& b){
            in >> b.title >> b.author >> b.company >> b.genre;
            return in;
        }

};


#endif 