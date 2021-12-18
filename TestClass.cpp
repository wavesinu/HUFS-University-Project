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
    Point(double xval, double yval)
    {
        x = xval;
        y = yval;
    }
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

class Circle : public Point
{
private:
    Point *center;
    double radius;

public:
    Circle(Point(double x, double y), double rad) : Point(x, y)
    {
        this->radius = rad;
    }
    Point getCenter() { return *center; }
    double getRadius() { return radius; }
    void setCenter(Point *center) {}
    void setRadius(double rad) { this->radius = rad; }
};

int main(){
    double x, y, radius;
    cin >> x >> y >> radius;
    Circle circle(Point(x, y), radius);
}