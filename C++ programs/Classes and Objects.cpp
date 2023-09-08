//#include<iostream>
//using namespace std;
//
//class complex{
//	int a,b;
//	public:
//		void setNum(int num1, int num2){
//			a=num1;
//			b=num2;
//		}
//	void print(){
//		cout<<"Your number is : "<<a<<"+"<<b<<"i"<<endl;
//	}
//	friend complex sumcomp(complex, complex);
//};
//
//complex sumcomp(complex obj1, complex obj2){
//	complex result;
//	result.setNum((obj1.a+obj2.a),(obj1.b+obj2.b));
//	return result;
//}
//int main(){
//	complex c1,c2,sum;
//	c1.setNum(1,2);
//	c1.print();
//	c2.setNum(2,3);
//	c2.print();
//	sum=sumcomp(c1,c2);
//	sum.print();
//	return 0;
//	
//}


//Define a class Rectangle with
// private attributes length and 
// width. Create a friend function 
// named calculateArea that c
// alculates the area of the rectangle.

#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
    Rectangle(int l, int w){
    	length=l;
    	width=w;
	}

    friend int calculateArea(Rectangle);
};

int calculateArea(Rectangle rect){
    return rect.length * rect.width;
}

int main() {
    int length, width,area;
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
	cin >> width;

    Rectangle rect(length, width);
    area = calculateArea(rect);

    cout << "Area of the rectangle is: " << area <<endl;

    return 0;
}

