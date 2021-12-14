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
    string GetName() { return name; }
    int GetRawPrice() { return rawPrice; }
    int GetEachPrice() { return eachPrice; }
    int GetEstimation() { return estimation; }
    bool Getstatus() { return status; }

    void SetName(string val) { name = val; }
    void SetRawPrice(int val) { rawPrice = val; }
    void SetEachPrice(int val) { eachPrice = val; }
    void SetEstimation(int val){
        if (val > 100)
            val = 100;
    }
    void Setstatus(bool val) { status = val; }
};

int main()
{
    Dessert d1;
    d1.SetName("민트초코");
    d1.SetEachPrice(3000);
    d1.SetRawPrice(1200);
    d1.SetEstimation(105);
    d1.Setstatus(1);

    cout << d1.GetName() << " ";
    cout << d1.GetEachPrice() << " ";
    cout << d1.GetRawPrice() << " ";
    cout << d1.GetEstimation() << " ";
    cout << d1.Getstatus() << " ";
}
