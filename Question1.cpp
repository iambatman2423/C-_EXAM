#include <iostream>
#include <string>
using namespace std;
class Book {
private:
    string title;
    string author;
    int publishedYear;
public:
    Book(string t = "", string a = "", int year = 0) 
        : title(t), author(a), publishedYear(year) {
            
        }
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    int getPublishedYear() const { return publishedYear; }
    
    void display() const {
        cout <<"Title:"<<title<< endl;
        cout <<"Author:"<<author<< endl;
        cout <<"Publish Year:"<<publishedYear<< endl;
    }
};
int main() {
    Book library[2];
    library[0] = Book("The batman", "DC", 2006);
    library[1] = Book("Beauty and the beast", "Diseny", 2013);
    
    for (int i = 0; i < 2; i++) {
        library[i].display();
    }
    return 0;
}