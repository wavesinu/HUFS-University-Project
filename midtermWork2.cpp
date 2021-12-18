#include <iostream>
#include <string>

using namespace std;

class Product {
protected:
    string name;
    double price;
public:
    Product(string nval, double pval) : name(nval), price(pval)
    {}
void setPrice(double pval){
    price = pval;
}
    virtual double getPrice(){
    return price;
}
void print(){
    cout<<"상품명 : "<<name<<endl;
    cout<<"가  격 : "<<price<<endl;
}

};

class DiscountProduct : public Product
{
private:
    double discount;
public:
    DiscountProduct(string nval, double pval, double disval) : Product(nval,pval){
        discount = disval;   
}
double getPrice(){
    return price-(price*(discount/100));
}
void print(){
    Product::print();
    cout << "할인율 : " << discount << endl;
}
};

int main(void){
    Product *p1 = new Product("toothbrush",3000);
    Product *p2 = new DiscountProduct("toothbrush",3000,15);

    cout<<p1->getPrice()<<endl;
    cout<<p2->getPrice()<<endl;

    return 0;
}