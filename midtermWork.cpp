#include <iostream>
#include <string>
using namespace std;

//Product 클래스
class Product
{
protected:
    string name;
    int price;

public:
    Product(string nval, double pval) : name(nval), price(pval)
    {}
    void setPrice(double pval) { this->price = pval; }
    void Print();
    virtual double getPrice() { return price; }
};

void Product::Print(){
    cout << "PRODUCT NAME : " << name << "\n";
    cout << "PRICE : " << price << endl;
}

//DiscountProduct 클래스 : Product 클래스를 상속
class DiscountProduct : public Product
{
private:
    double discount;

public:
    DiscountProduct(string nval, int pval, double dval) : Product(nval, pval)
    {
        this->discount = dval;
    }
    double getPrice() { return price - (price * (discount / 100)); }
    void Print() {
        Product::Print();
        cout << discount << endl;
    }
};

int main(){
    Product *p1 = new Product("Keyboards", 3000);
    p1->Print();
    Product *p2 = new DiscountProduct("Keyboards", 3000, 10);
    p2->Print();
    return 0;
}