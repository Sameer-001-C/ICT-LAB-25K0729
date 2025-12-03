#include <iostream>
#include <string>
using namespace std;

class Product{
	private:
		string name;
		float price;
	public:
		void setName(string n){
			name = n;
		}
		void setPrice(float p){
			if(p < 0){
				cout << "Price cannot be negative!" << endl;
			}
			else{
				price = p;
			}
		}
		string getName(){
			return name;
		}
		float getPrice(){
			return price;
		}
};


int main(){
	Product p;
	
	p.setName("Laptop");
	p.setPrice(75000);
	
	cout << "Name: " << p.getName() << endl;
	cout << "Price: " << p.getPrice() << endl;
	
	return 0;
}
