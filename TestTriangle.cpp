#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;

class Point{
protected:
    double x;
    double y;

public:
    Point() : x(0), y(0)
    {}
    Point(double xval, double yval) : x(xval), y(yval)
    {}
    double getX() { return x; }
    double getY() { return y; }
    void setX(double val) { this->x = val; }
    void setY(double val) { this->y = val; }
    double distance_from_origin();
};
double Point::distance_from_origin()
{
    return sqrt(pow(x, 2) + pow(y, 2));
}

class Circle : public Point{
private:
    double radius;
    Point center;

public:
    Circle()
    {}
    Circle(Point p, double rad) : center(p), radius(rad)
    {}
    Circle(int xval, int yval, double rad) : center(x, y), radius(rad)
    {}
    Point getCenter() { return center; }
    double getRadius() { return radius; }
    void setCenter(Point p) { this->center = p; }
    void setRadius(double rad) { this->radius = rad; }
    double area();
};
double Circle::area()
{
    return radius * radius * PI;
}

int main(){
    double x, y, radius;
    cin >> x >> y >> radius;

    Circle circle(Point(x, y), radius);
    printf("x: %lf  y: %lf  radius: % lf  area: %lf\n",
           circle.getCenter().getX(),
           circle.getCenter().getY(),
           circle.getRadius(),
           circle.area());
    return 0;
}