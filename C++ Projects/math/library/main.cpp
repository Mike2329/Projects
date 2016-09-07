#include "Library.hpp"
#include <iostream>
#include <string>
using namespace std;

int main()
{
       Book b1("123", "War and Peace", "Tolstoy");
Book b2("234", "Moby Dick", "Melville");
Book b3("345", "Phantom Tollbooth", "Juster");
Patron p1("abc", "Felicity");
Patron p2("bcd", "Waldo");
Library lib;
lib.addBook(&b1);
lib.addBook(&b2);
lib.addBook(&b3);
lib.addPatron(&p1);
lib.addPatron(&p2);
cout<< lib.checkOutBook("bcd", "234")<<endl;
for (int i=0; i<7; i++)
lib.incrementCurrentDate();
cout<<lib.checkOutBook("bcd", "123")<<endl;
cout<<lib.checkOutBook("abc", "345")<<endl;
for (int i=0; i<24; i++)
lib.incrementCurrentDate();
lib.payFine("bcd", 0.4);
std::string p1Book = p1.getIdNum();
   cout<<"Patron p1 fine Amount:"<<p1Book<<endl;
double p2Fine = p2.getFineAmount();
   cout<<"Patron p2 fine Amount:"<<p2Fine;
return 0;
}
