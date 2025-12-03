#include <iostream>
#include <string>
using namespace std;

class Car{
	private:
		int fuel;
		int speed;
	public:
		void setFuel(int f){
			if(f < 0){
				cout << "Fuel cannot be negative!";
			}
			else{
				fuel = f;
			}
		}
		void setSpeed(int s){
			speed =  s;
		}
		
		int getSpeed(){
			return speed;
		}
		int getFuel(){
			return fuel;
		}
};


int main(){
	Car c;
	
	c.setFuel(50);
	c.setSpeed(120);
	
	cout << "Fuel: " << c.getFuel() << endl;
	cout << "Speed: " << c.getSpeed() << endl;
	
	return 0;
}
