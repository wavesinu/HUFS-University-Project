#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class Triangle{
private:
    double a;
    double b;
    double c;

public:
    void setA(double);
    void setB(double);
    void setC(double);
    double size();
};

void Triangle::setA(double a) { this->a = a; }
void Triangle::setB(double b) { this->b = b; }
void Triangle::setC(double c) { this->c = c; }
double Triangle::size(){
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main()
{
    int T;
}