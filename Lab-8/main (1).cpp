#include <iostream>

using namespace std;

/*
1)

i. productType product1;  - Line 4 

ii. productType product2("Microwave", "M3562", "GeneralPool", 35, 175.00, 0.1); - Line 7 

iii. productType product3("D1290", 25, 375.00, 0.05); - Line 6 

iv. productType product4(10, 8.50, 0.2); - Line 5 

*/

class productType // Line 1

{ // Line 2

public: // Line 3
  productType(){ // Line 4
      productName = "";
      id = "";
      manufacturer = "";
      quantitiesInStock = 0;
      price = 0.0;
      discount = 0.0;
  };

  productType(int x, double y, double z){ // Line 5
      productName= "";
      id = "";
      manufacturer = "";
      quantitiesInStock = x;
      price = y;
      discount = z;
  }; 

  productType(string a, int x, double y, double z){ // Line 6
      productName = "";
      manufacturer = "";
      id = a;
      quantitiesInStock = x;
      price = y;
      discount = z;
  }; 

  productType(string a, string b, string c, int x, double y, double z){ // Line 7
      productName = a;
      id = b;
      manufacturer = c;
      quantitiesInStock = x;
      price = y;
      discount = z;
  }; 

  void set(string , string , string , int , double , double ); // Line 8

  void print() const; // Line 9

  void setQuantitiesInStock(int x); // Line 10

  void updateQuantitiesInStock(int x); // Line 11

  int getQuantitiesInStock() const; // Line 12

  void setPrice(double x); // Line 13

  double getPrice() const; // Line 14

  void setDiscount(double d); // Line 15

  double getDiscount() const; // Line 16

private:              // Line 17
  string productName; // Line 18

  string id; // Line 19

  string manufacturer; // Line 20

  int quantitiesInStock; // Line 21

  double price; // Line 22

  double discount; // Line 23
};

void productType::set(string a, string b, string c, int x, double y, double z){

    productName = a;
    id = b;
    manufacturer = c;
    quantitiesInStock = x;
    price = y;
    discount = z;
}

void productType::print() const{
    cout << "Product Name: " << productName << "\n";
    cout << "ID: " << id << "\n";
    cout << "Manufacturer: " << manufacturer << "\n";
    cout << "Quantities in Stock: " << quantitiesInStock << "\n";
    cout << "Price: " << price << "\n";
    cout << "Discount: " << discount << "\n";
}

void productType::setQuantitiesInStock(int x){
    quantitiesInStock = x;
}

void productType::updateQuantitiesInStock(int x){
    quantitiesInStock += x;
}

int productType::getQuantitiesInStock() const{
    return quantitiesInStock;
}

void productType::setPrice(double x) {
    price = x;
}

double productType::getPrice() const{
    return price;
}

void productType::setDiscount(double d){
    discount = d;
}

double productType::getDiscount() const{
    return discount;
}


int main() {

    productType prod1;
    productType prod2("Apple","123","Family Farm", 100, 5.99, 12);

    prod1.set("Pear", "124", "Big Farm", 120, 3.99, 0);

    prod1.print();

    prod1.updateQuantitiesInStock(10);

    cout << "Prod 1 Quantities: " << prod1.getQuantitiesInStock() << "\n";

    prod1.setPrice(15.5);

    cout << "Prod1 Price: " << prod1.getPrice() << "\n";

    prod1.print();
}