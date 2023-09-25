#include <iostream>
#include "book.h"

using namespace std;

Book::Book(){
    title = "Unknown";
    author = "Unknown";
    company = "Unknown";
    genre = "Unknown";
}

Book::Book(string t, string a, string c, string g){
    title = t;
    author = a;
    company = c;
    genre = g;
}

string Book::getTitle(){
    return title;
}
string Book::getAuthor(){
    return author;
}
string Book::getCompany(){
    return company;
}
string Book::getGenre(){
    return genre;
}

void Book::setTitle(string t){
    title = t;
}
void Book::setAuthor(string a){
    author = a;
}
void Book::setCompany(string c){
    company = c;
}
void Book::setGenre(string g){
    genre = g;
}

/*Para implementar essa classe para uma livraria, 
seria necessário incluir a variável preço aos membros privados, 
o que se adequa ao uso de classes herdeiras. */

