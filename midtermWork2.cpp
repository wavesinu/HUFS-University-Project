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
    double getPrice() { return price; }
    void setPrice(double pval){
        price = pval;
    }
    double getPrice(){
        return price;
    }
    void printProductInfo(){
        cout << "PRODUCT NAME : "<< name <<endl;
        cout << "PRODUCT PRICE : "<< price <<endl;
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
    double getPrice(double pval){
        return price-(price*(discount/100));    //할인된 가격을 반환
    }
    void setPrice(double pval){
        price = getPrice(pval);
    }
    void printProductInfo(){
        Product::printProductInfo();
        cout << "DISCOUNTED PRICE : " << discount << endl;
    }
};

int main(void){
    //객체 생성
    Product *product1 = new Product("Keychron K3",115000);
    Product *product2 = new DiscountProduct("Keychron K3",115000,30);

    //기존의 상품가격과 할인상품의 가격을 출력
    cout << "할인 적용 전 제품의 정보" << '\n';
    product1->printProductInfo();
    cout << endl;

    cout << "할인 적용 후 제품의 정보" << '\n';
    product2->getPrice();
    product2->printProductInfo();

    return 0;
}