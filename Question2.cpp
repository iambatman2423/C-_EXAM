#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string address;

public:

    Person(string n, int a, string addr) {
        name = n;
        age = a;
        address = addr;
    }
    
    string getName() { return name; }
    int getAge() { return age; }
    string getAddress() { return address; }
};

int main() {
    int N;
    cout << "Enter number of persons: ";
    cin >> N;
    
    Person* persons[N];
    
    for (int i = 0; i < N; i++) {
        string name, address;
        int age;
        cout << "\nPerson " << i+1 << ":\n";
        cout << "Name: ";
        cin >> name;
        cout << "Age: ";
        cin >> age;
        cout << "Address: ";
        cin >> address;
        
        persons[i] = new Person(name, age, address);
    }
    
    cout << "\nPerson Details\n";
    for (int i = 0; i < N; i++) {
        cout << "Person " << i+1 << ": "
             << persons[i]->getName() << ", "
             << persons[i]->getAge() << ", "
             << persons[i]->getAddress() << endl;
    }
    
    for (int i = 0; i < N; i++) {
        delete persons[i];
    }

    return 0;
}