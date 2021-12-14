#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Triangle{
private:
    double a;
    double b;
    double c;

public:
    void setA(double _a);
    void setB(double _b);
    void setC(double _c);
    double size(Triangle &x);
};

void Triangle::setA(double _a){
    this->a = _a;
}
void Triangle::setB(double _b){
    this->b = _b;
}
void Triangle::setC(double _c){
    this->c = _c;
}
double Triangle::size(Triangle &x){
    double s = (double)(a + b + c) / 2;
    double k = sqrt(s * (s - a) * (s - b) * (s - c));

    return k;
}

int main(){
    Triangle tri;

    double a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    tri.setA(a);
    tri.setB(b);
    tri.setC(c);

    cout << tri.size(tri);
}