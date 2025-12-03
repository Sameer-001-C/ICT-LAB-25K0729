#include <iostream>
using namespace std;

// Base class
class Shape {
	public:
	    virtual void area() {  // virtual allows overriding
	        cout << "Area of shape" << endl;
	    }
};

// Derived class
class Rectangle : public Shape {
	private:
	    float length;
	    float width;
	public:
	    void setLength(float l) {
	        length = l;
	    }
	    void setWidth(float w) {
	        width = w;
	    }
	    void area() override {  // override base class method
	        cout << "Area of rectangle: " << length * width << endl;
	    }
};

int main() {
    Rectangle r;
    r.setLength(5.0);
    r.setWidth(3.0);
    r.area();  // calls the overridden method

    return 0;
}
