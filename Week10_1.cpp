#include <iostream>
#include <string>
using namespace std;

class Book{
private:
    string name;
    string author;
    int price;
    int rating;

public:
    void setName(string _name);
    void setPrice(int _price);
    void setRating(int _rating);
    void setAuthor(string _author);
    void showInfo(Book &book);
};

void Book::setName(string _name){
    name = _name;
}
void Book::setPrice(int _price){
    price = _price;

    if (_price < 0)
        price = 0;
}
void Book::setRating(int _rating){
    rating = _rating;
        
    if (_rating < 0)
        rating = 0;
    else if (_rating > 100)
        rating = 100;

}
void Book::setAuthor(string _author){
    author = _author;
}
void Book::showInfo(Book &book){
    cout << "평점 " << book.rating << "점, ";
    cout << book.author << "의 " << book.name << ", ";
    cout << book.price << "에 판매중!";
}

int main(){
    Book book;

    string name, author;
    int rating, price;

    cin >> name;
    cin >> author;
    cin >> price;
    cin >> rating;

    book.setAuthor(author);
    book.setName(name);
    book.setPrice(price);
    book.setRating(rating);

    book.showInfo(book);
    return 0;
}