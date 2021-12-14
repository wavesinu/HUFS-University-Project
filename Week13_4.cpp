#include <iostream>
#include <string>
using namespace std;

class Person{
private:
    string name;
    string mobile;
    string *email;
    int age;

public:
    Person(string name_, string mobile_, string email_, int age_):name(name_), mobile(mobile_), age(age_)
    {
        email = new string(email_);
    }
    
    Person(const Person &rhs) : name(rhs.name), mobile(rhs.mobile), age(rhs.age)
    {
        email = new string;
        *email = *rhs.email;
    }
    ~Person(){
        delete email;
    }

    void setName(string name_){
        this->name = name_;
    }
    void setMobile(string mobile_){
        this->mobile = mobile_;
    }
    void setEmail(string email_){
        email = new string(email_);
    }
    void setAge(int age_){
        this->age = age_;
    }
    string getName() { return name; }
    string getMobile() { return mobile; }
    string getEmail() { return *email; }
    int getAge() { return age; };

    void printStr();
};

void Person::printStr(){
    cout << name << ' ' << mobile << ' ' << *email << ' ' << age << endl;
}

int main(){
    Person *a = new Person("누구야", "01012345678","secured8372@gmail.com", 20);
    Person *b = new Person(*a);

    cout << endl;

    a->printStr();
    b->printStr();

    a->setEmail("123123@123123.123");
    cout << "a->setEmail 후:" << endl;

    a->printStr();
    b->printStr();

    return 0;
}