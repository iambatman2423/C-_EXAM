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
};

class Dog : public Animal {
public:
    Dog(string n) : Animal(n, "Woof!") {}
    
    void makeSound() override {
        cout << getName() << " barks: " << getSound() << endl;
    }
};

class Cat : public Animal {
public:
    Cat(string n) : Animal(n, "Meow!") {}
    
    void makeSound() override {
        cout << getName() << " meows: " << getSound() << endl;
    }
};

int main() {
    cout<<"Question3"<<endl;
    Dog myDog("Golden Retriver");
    Cat myCat("Golden sparkle");
    Animal* animals[2];
    
    animals[0] = &myDog;
    animals[1] = &myCat;
    
    cout << "Animal sounds:\n";
    for (int i = 0; i < 2; i++) {
        animals[i]->makeSound();
    }

    return 0;
}