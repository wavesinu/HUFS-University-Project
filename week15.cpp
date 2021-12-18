#include <iostream>
#include <string>
using namespace std;

class Book{
protected:
    string name;
    string author;
    int price;
    int rating;

public:
    Book(string name, string author, int price, int rating);
    void setName(string);
    void setAuthor(string);
    void setPrice(int);
    void setRating(int);
    virtual void showInfo();
};

Book::Book(string name, string author, int price, int rating)
: name(name), author(author), price(price), rating(rating)
{}

void Book::setName(string name) { this->name = name; }
void Book::setAuthor(string author) { this->author = author; }
void Book::setPrice(int price){
    if (price < 0)
        price = 0;
    this->price = price;
}
void Book::setRating(int rating){
    if (rating < 0)
        rating = 0;
    else if (rating > 100)
        rating = 100;
    this->rating = rating;
}
void Book::showInfo(){
    cout << "평점 " << rating << "점, " << author << "의 " << name << ", ";
    cout << price << "에 판매중!";
}

class Recbook : public Book{
private:
    string recom;

public:
    Recbook(string name, string author, int price, int rating, string recom)
    : Book(name, author, price, rating)
    {
        this->recom = recom;
    }
    void showInfo();
};

void Recbook::showInfo(){
    cout << "평점 " << rating << "점, " << author << "의 " << name << endl;
    cout << recom << endl;
    cout << "판매가 " << price << "원";
}

int main(){
    Book *mybook;
    string author, name, recom;
    int price, rating;

    getline(cin, name);
    getline(cin, author);
    cin >> price;
    cin >> rating;
    cin.ignore(100, '\n');
    getline(cin, recom);

    mybook = new Recbook(name, author, price, rating, recom);
    cout << endl;
    mybook->showInfo();

    return EXIT_SUCCESS;
}