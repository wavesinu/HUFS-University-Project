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
    Point(){}
    Point(double xval, double yval) : x(xval), y(yval)
    {}
    double getX() { return x; }
    double getY() { return y; }
    void setX(double xval) { this->x = xval; }
    void setY(double yval) { this->y = yval; }
    double distance_from_origin();
    
};

double Point::distance_from_origin(){
    return sqrt(pow(x, 2) + pow(y, 2));
}

class Circle : public Point
{
private: 
    Point center;
    double radius;

public:
    Circle(Point(const double& x, const double& y), double radvar)
    {
        this->center = center;
        this->radius = radvar;
    }
    Point getCenter();
    double getRadius() { return radius; }
    void setCenter(Point val);
    void setRadius(double val) { this->radius = val; }
    double area();
};

void Circle::setCenter(Point centerval){
    center = centerval;
}

Point Circle::getCenter(){
    return center;
}

int main(){
    double x, y, radius;
    cin >> x >> y >> radius;

    Circle circle(Point(x, y), radius);
    cout << "x: "<< circle.getCenter().getX();

    return 0;
}