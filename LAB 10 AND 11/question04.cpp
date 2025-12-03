#include <iostream>
#include <string>
using namespace std;

class Employee{
	private:
		int id;
		float salary;
	public:
		void setID(int n){
			id = n;
		}
		void setSalary(float s){
			if(s < 0){
				cout << "Salary cannot be less than zero!";
			}
			else{
				salary = s;
			}
		}
		
		int getID(){
			return id;
		}
		float getSalary(){
			return salary;
		}
};


int main(){
	Employee e;
	
	e.setID(101);
	e.setSalary(50000);
	
	cout << "ID: " << e.getID() << endl;
	cout << "Salary: " << e.getSalary() << endl;
	
	return 0;
}
