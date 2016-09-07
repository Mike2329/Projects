#include "ShoppingCart.hpp"
#include <iostream>
#include <string>
using namespace std;

int main()
{
      Item a("affadavit", 179.99, 18);
      Item b("Bildungsroman", 0.5, 25);
      Item c("capybara", 4.5, 16);
      Item d("dirigible", 0.05, 16);
      ShoppingCart sc1;
      sc1.addItem(&a);
      sc1.addItem(&b);
      sc1.addItem(&c);
      sc1.addItem(&d);
      double diff = sc1.totalPrice();
      cout<<"Total price is : "<<diff << endl;
      return 0;
}
