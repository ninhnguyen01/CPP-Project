#include <iostream>

using namespace std;

class Book
{
private:
    string bookCondition;
public:
    string title;
    string author;
    int pages;
};

int main() {

    Book book1;
    book1.title = "Alexander The Great";
    book1.author = "Lucianus";
    book1.pages = 500;
    cout << "Title: " << book1.title << endl;
    cout << "Author: " << book1.author << endl;
    
    Book book2;
    book2.title = "Epic of Gilgamesh";
    book2.author = "Unknown Sumerian";
    book2.pages = 300;
    cout << "Title: " << book2.title << endl;
    cout << "Author: " << book2.author << endl;

    return 0;
}
