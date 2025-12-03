#include <iostream>
using namespace std;

// Base class
class Vehicle {
	protected:
	    int speed;  // protected so derived classes can access it
	public:
	    void setSpeed(int s) {
	        speed = s;
	    }
	    void showSpeed() {
	        cout << "Speed: " << speed << " km/h" << endl;
	    }
};

// Derived class
class Car : public Vehicle {
	public:
	    void fuelType() {
	        cout << "Fuel Type: Petrol" << endl;
	    }
};

int main() {
    Car c;

    c.setSpeed(120); // set speed for the Car
    c.showSpeed();   // show speed (inherited from Vehicle)
    c.fuelType();    // show fuel type

    return 0;
}
