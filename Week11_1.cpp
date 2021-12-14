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

int main() { // Ŭ������ �����ϸ� main���� �ʿ� ����
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
    
    printf("�� A (%lf, %lf), ������ %lf, ���� %lf\n",
           A->getX(), A->getY(), A->getRadius(), A->area());
    printf("�� B (%lf, %lf), ������ %lf, ���� %lf\n",
           B->getX(), B->getY(), B->getRadius(), B->area());

    if (A->is_overlap(B))
        printf("�� ���� ������ �ֽ��ϴ�.\n");
    else
        printf("�� ���� ������ �����ϴ�.\n");
}