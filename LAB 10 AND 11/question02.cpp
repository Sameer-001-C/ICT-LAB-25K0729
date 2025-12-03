#include <iostream>
using namespace std;


class Rectangle{
	private:
		float length;
		float  width;
	public:
		float getLength(){
			return length;
		}
		float getWidth(){
			return width;
		}
		void setLength(float n){
			length = n;
		}
		void setWidth(float n){
			width = n;
		}
		
		float area(){
			return length*width;
		}
		
};

int main(){
	Rectangle r;
	
	r.setLength(5.0);
	r.setWidth(3.0);
	
	cout << "Length: " << r.getLength() << endl;
	cout << "Width: " << r.getWidth() << endl;
	cout << "Area: " << r.area() << endl;
	
	return 0;
}
