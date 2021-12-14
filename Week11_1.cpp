#include <iostream>
#include <cmath>
#define PI 3.14
using namespace std;

// your code
class Circle{
private:
    double x;
    double y;
    double radius;

public:
    double getX(){
        return x;
    }
    void setX(double val){
        x = val;
    }

    double getY(){
        return y;
    }
    void setY(double val){
        y = val;
    }

    double getRadius(){
        return radius;
    }
    void setRadius(double val){
        radius = val;
    }

    double area(){
        return (PI * (radius * radius));
    }
    bool is_overlap(Circle *c);
};

bool Circle::is_overlap(Circle* c){
    double dis = sqrt(pow(x - c->x, 2) + pow(y - c->y, 2));
    return dis <= radius + c->radius;
}

int main() { // 클래스만 구현하면 main수정 필요 없음
    double x, y, radius;
    Circle* A = new Circle;
    Circle* B = new Circle;
    
    cin >> x;
    cin >> y;
    cin >> radius;
    A->setX(x);
    A->setY(y);
    A->setRadius(radius);

    cin >> x;
    cin >> y;
    cin >> radius;
    B->setX(x);
    B->setY(y);
    B->setRadius(radius);
    
    printf("원 A (%lf, %lf), 반지름 %lf, 넓이 %lf\n",
           A->getX(), A->getY(), A->getRadius(), A->area());
    printf("원 B (%lf, %lf), 반지름 %lf, 넓이 %lf\n",
           B->getX(), B->getY(), B->getRadius(), B->area());

    if (A->is_overlap(B))
        printf("두 원은 접점이 있습니다.\n");
    else
        printf("두 원은 접점이 없습니다.\n");
}