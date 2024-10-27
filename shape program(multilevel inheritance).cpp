#include <iostream>
using namespace std;

// Base class shape
class Shape {
public:
    void shape() {
        cout << "This is a shape" << endl;
    }
};

// Derived class polygon (inherits from shape)
class Polygon: public Shape {
public:
    void polygon() {
        cout << "Polygon is a shape" << endl;
    }
};

// Derived class rectangle (inherits from polygon)
class Rectangle: public Polygon {
public:
    void rectangle() {
        cout << "Rectangle is a polygon" << endl;
    }
};

// Derived class triangle (inherits from rectangle)
class Triangle: public Rectangle {
public:
    void triangle() {
        cout << "Triangle is a polygon" << endl;
    }
};

// Derived class square (inherits from triangle)
class Square: public Triangle {
public:
    void square() {
        cout << "Square is a rectangle" << endl;
    }
};

int main() {
    // Create an object of class Square
    Square mySquare;

    // Call methods of square, triangle, rectangle, polygon, and shape through the square object 
    mySquare.square();
    mySquare.rectangle(); 
    mySquare.triangle();
    mySquare.polygon();
    mySquare.shape();
    
    return 0;
}
