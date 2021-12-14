#include <iostream>
#include <string>
using namespace std;

class Employee{
private:
    string name;
    int age;

    string position;
    int rank;

public:
    Employee(string name, int age, string position, int rank)
    : name(name), age(age), position(position), rank(rank)
    {}

    //copy constructor
    Employee(const Employee& employee){
        name = employee.name;
        age = employee.age;
        position = employee.position;
        rank = employee.rank;
    }

    //default constructor
    Employee(){}

    void print_info();
    int calculate_pay();
};

void Employee::print_info(){
    cout << name << " (" << position << ", " << age << ") ==>"
         << calculate_pay() << "Won" << endl;
}
int Employee::calculate_pay() { return 200 + rank * 50; }

class EmployList{
private:
    int allocEmployee;
    int currentEmployee;
    Employee **employList;  //직원 데이터

public:
};

int main(){

}