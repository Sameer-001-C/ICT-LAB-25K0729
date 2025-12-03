#include <iostream>
using namespace std;

// Base class
class Employee {
	protected:
	    float salary;
	public:
	    void setSalary(float s) {
	        salary = s;
	    }
	    void displaySalary() {
	        cout << "Salary: " << salary << endl;
	    }
};

// Derived class
class Manager : public Employee {
	public:
	    void bonus() {
	        cout << "Bonus is 5000" << endl;
	    }
};

int main() {
    Manager m;
    m.setSalary(75000);   // Set salary
    m.displaySalary();    // Display salary
    m.bonus();            // Display bonus

    return 0;
}
