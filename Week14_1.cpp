#include <iostream> 
#include <cmath> 
#define PI 3.14 
using namespace std;
class Point
{
private:
    double x;
    double y;
public:
    Point(double xval, double yval) : x(xval), y(yval)
    {
    }
    double getX() { return x; }
    double getY() { return y; }
    void setX(double xval) { this->x = xval; }
    void setY(double yval) { this->y = yval; }
    double distance_from_origin();
};
double Point::distance_from_origin()
{
    return sqrt(pow(x, 2) + pow(y, 2));
}
class Circle : public Point
{
private:    
    double radius;
public:
    Circle(double x, double y, double radvar) : Point(x, y)
    {     
        this->radius = radvar;
    }
    
    double getRadius() { return radius; }    
    void setRadius(double val) { this->radius = val; }
    double area()
    {
        return radius * radius * PI;
    }
};

int main()
{
    double x, y, radius;
    cin >> x >> y >> radius;
    Circle circle(x, y, radius);
    cout << "x: " << circle.getX() << endl;
    cout << "y: " << circle.getY() << endl;
    return 0;
}