#include <iostream>
#include <string>
using namespace std;

class Car {
    private:
        string* regnum;
        int dis;
        int year;
        float speed;
    public:
        Car(string _regnum, int _dis, int _year, float _speed): dis(_dis), year(_year), speed(_speed)
        {
            regnum = new string(_regnum);
            
        }

        ~Car(){
            delete regnum;
        }
        string getRegnum() { return *regnum; }
        int getDis()  { return dis; }
        int getYear() { return year; }
        float getSpeed() { return speed; }
};


int main() {
    string regnum_;
    int dis;
    int year;
    float speed;

    cin >> regnum_;
    cin >> dis;
    cin >> year;
    cin >> speed;

    Car myCar(regnum_, dis, year, speed);
    
    cout << myCar.getRegnum() << ' ' << myCar.getDis() << ' ' << myCar.getYear() << ' ' << myCar.getSpeed();
    return 0;
}