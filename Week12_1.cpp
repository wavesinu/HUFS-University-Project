#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;

class Circle {
    private:
        double x;
        double y;
        double radius;
    public:
        Circle(double x_, double y_, double radius_){
            this->x = x_;
            this->y = y_;
            this->radius = radius_;
        }

        double getX();
        double getY();
        double getRadius();
        void setX(double);
        void setY(double);
        void setRadius(double);
        double area();
        bool is_overlap(Circle*);
};

double Circle::getX() { return x; }
double Circle::getY() { return y; }
double Circle::getRadius() { return radius; }
void Circle::setX(double n) { x = n; }
void Circle::setY(double n) { y = n; }
void Circle::setRadius(double r) { radius = r; }
double Circle::area() { return radius*radius*3.14; }
bool Circle::is_overlap(Circle* c) {
    double distance = sqrt(pow(x-c->x, 2) + pow(y-c->y, 2));
    return distance <= radius + c->radius;
}

int main() { // 클래스만 구현하면 main수정 필요 없음
    double x, y, radius;
    
    cin >> x >> y >> radius;
    Circle* A = new Circle(x, y, radius);
    cin >> x >> y >> radius;
    Circle* B = new Circle(x, y, radius);
    
    printf("원 A (%lf, %lf), 반지름 %lf, 넓이 %lf\n",
           A->getX(), A->getY(), A->getRadius(), A->area());
    printf("원 B (%lf, %lf), 반지름 %lf, 넓이 %lf\n",
           B->getX(), B->getY(), B->getRadius(), B->area());
    if (A->is_overlap(B))
        printf("두 원은 접점이 있습니다.\n");
    else
        printf("두 원은 접점이 없습니다.\n");
}