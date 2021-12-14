#include <iostream>
#include <cmath>
using namespace std;

class Triangle{
    private:
        double a;
        double b;
        double c;
    public:
        Triangle(double a_, double b_, double c_) : a(a_), b(b_), c(c_)
        {
            a = a_;
            b = b_;
            c = c_;
        }
        double size();
};

double Triangle::size() {
    double s = (a + b + c) / 2;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main() {
	double a, b, c;
    cin >> a >> b >> c;

    Triangle T1(a, b, c);
    cout << T1.size();

    return 0;
}