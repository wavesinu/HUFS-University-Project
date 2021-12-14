#include <iostream>
#include <string>
using namespace std;

class Dessert
{
private:
    string name;
    int rawPrice;
    int eachPrice;
    int estimation;
    bool status;

public:
    string getName() { return name; }
    int getRawPrice() { return rawPrice; }
    int getEachPrice() { return eachPrice; }
    int getEstimation() { return estimation; }
    bool getStatus() { return status; }

    void setName(string name_) { name = name_; }
    void setRawPrice(int rawprice_) { rawPrice = rawprice_; }
    void setEachPrice(int eachprice_) { eachPrice = eachprice_; }
    void setEstimation(int val_);
    void setStatus(bool status_) { status = status_; }
};

void Dessert::setEstimation(int val_){
    if (val_>100)
        estimation = 100;
    else
        estimation = val_;
}

int main(){
    Dessert d1;
    d1.setEachPrice(3000);
    d1.setRawPrice(1200);
    d1.setEstimation(105);
    d1.setStatus(1);

    cout << d1.getName() << " ";
    cout << d1.getEachPrice() << " ";
    cout << d1.getRawPrice() << " ";
    cout << d1.getEstimation() << " ";
    cout << d1.getStatus() << " ";

    return 0;
}