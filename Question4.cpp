#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string name;
    string sound;

public:
    Animal(string n, string s) : name(n), sound(s) {}
    string getName() { return name; }
    string getSound() { return sound; }

    void setName(string n) { name = n; }
    void setSound(string s) { sound = s; }

    virtual void makeSound() {
        cout << name << " says " << sound << endl;
    }
    virtual void displayDetails() {
        cout << "Animal: " << name << ", Sound: " << sound << endl;
    }
};

class Dog : public Animal {
public:
    Dog(string n) : Animal(n, "Woof!") {}

    void makeSound() override {
        cout << getName() << " barks: " << getSound() << endl;
    }

    void displayDetails() override {
        cout << "Dog Details" << endl;
        cout << "Name: " << getName() << endl;
        cout << "Type: Domestic Pet" << endl;
        cout << "Sound: " << getSound() << endl;
        cout << "Favorite activity: Fetch" << endl;
    }
};
class Cat : public Animal {
public:
    Cat(string n) : Animal(n, "Meow!") {}

    void makeSound() override {
        cout << getName() << " meows: " << getSound() << endl;
    }

    void displayDetails() override {
        cout << "Cat Details" << endl;
        cout << "Name: " << getName() << endl;
        cout << "Type: Domestic Pet" << endl;
        cout << "Sound: " << getSound() << endl;
        cout << "Favorite activity: Sleeping" << endl;
    }
};

int main() {
    
    cout<<"Question 4"<<endl;
    Animal* animals[2];

    Dog dog1("Buddy");
    Cat cat1("Whiskers");

    animals[0] = &dog1;
    animals[1] = &cat1;

    cout << "Animal Details:\n";
    for (int i = 0; i < 2; i++) {
        animals[i]->displayDetails();
        cout << endl;
    }

    cout << "\nAnimal Sounds:\n";
    for (int i = 0; i < 2; i++) {
        animals[i]->makeSound();
    }

    return 0;
}