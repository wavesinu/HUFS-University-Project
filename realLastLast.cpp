/*중간고사 대체과제 (202103316 조이수)*/
#include <iostream>
#include <string>

using namespace std;

class Product{
protected:
    string name;
    double price;

public:
    Product(string nval, double pval) : name(nval), price(pval)
    {}
    virtual string getName() { return name; }
    string setName(string nval) { name = nval; }
    virtual double getPrice() { return price; }
    void setPrice(double pval) { price = pval; }
    virtual void print(){
        cout << "PRODUCT NAME : " << getName() << '\n';
        cout << "PRODUCT PRICE : " << getPrice() << '\n';
        cout << endl;
    }
};

class DiscountProduct : public Product{
private:
    double discount;

public:
    DiscountProduct(string nval, double pval, double disval) : Product(nval, pval)
    {
        this->discount = disval;
    }
    double getPrice() { return price - (price * (discount / 100)); }
    void print(){
        cout << "PRODUCT NAME : " << getName() << '\n';
        cout << "DISCOUNTED PRODUCT PRICE : " << getPrice() << '\n';
				cout << endl;
    }
};

int main(){
    //객체 생성
    Product *product1 = new Product("Keychron K3",115000);
    Product *product2 = new DiscountProduct("Keychron K3",115000, 50);

    //할인 전, 후의 제품의 정보를 출력
    cout << "할인 적용 전 제품의 정보" << endl;
    product1->print();

    cout << "할인 적용 후 제품의 정보" << endl;
    product2->print();

    return EXIT_SUCCESS;
}