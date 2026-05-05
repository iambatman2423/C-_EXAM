#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
    virtual void draw() = 0;
};
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    
    double area() override {
        return 3.14159 * radius * radius;
    }
    
    void draw() override {
        cout << "Drawing a Circle with radius " << radius << endl;
    }
};
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    
    double area() override {
        return width * height;
    }
    
    void draw() override {
        cout << "Drawing a Rectangle with width " << width << " and height " << height << endl;
    }
};

int main() {
    cout<<"Question 5"<<endl;
    Circle cir(5.0);
    Rectangle rect(4.0, 6.0);
    
    Shape* shapes[2];
    shapes[0] = &cir;
    shapes[1] = &rect;
    
    for (int i = 0; i < 2; i++) {
        cout << "Shape " << i+1 << ":" << endl;
        shapes[i]->draw();
        cout << "Area: " << shapes[i]->area() << endl << endl;
    }
    
    return 0;
}