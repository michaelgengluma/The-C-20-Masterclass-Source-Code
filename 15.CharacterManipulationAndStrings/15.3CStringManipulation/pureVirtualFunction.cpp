#include <iostream>

// Abstract base class with a pure virtual function
class Shape {
public:
    // Pure virtual function
    virtual void draw() const = 0;

    // A non-pure virtual function (optional)
    virtual void info() const {
        std::cout << "This is a shape." << std::endl;
    }
};

// Derived class that overrides the pure virtual function
class Circle : public Shape {
public:
    // Override the pure virtual function
    void draw() const override {
        std::cout << "Drawing a circle." << std::endl;
    }
};

// Derived class that overrides the pure virtual function
class Square : public Shape {
public:
    // Override the pure virtual function
    void draw() const override {
        std::cout << "Drawing a square." << std::endl;
    }
};

int main() {
    // Shape shape; // Error: Cannot instantiate an abstract class

    Circle circle;
    Square square;

    Shape* shapes[] = { &circle, &square };

    for (Shape* shape : shapes) {
        shape->draw();  // Polymorphic behavior: calls the appropriate draw() method
        shape->info();  // Calls the non-pure virtual function from the base class
    }

    return 0;
}
