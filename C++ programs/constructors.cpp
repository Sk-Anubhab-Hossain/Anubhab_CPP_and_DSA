// Write a C++ class called "Employee" that has three private
//  member variables: "name", "salary", and "employeeCode". 
//  The class should have a constructor that initializes these member
//   variables and a public member function called "displayInfo" that
//    prints out the employee's name, salary, and employeeCode.

#include<iostream>
#include<string>
using namespace std;
class employee{
	private:
		string name;
		int salary;
		int empCode;
	public:
		employee();
		employee(string ename, int esal, int ecode){
			name=ename;
			salary=esal;
			empCode=ecode;
		}
		void displayinfo(){
			cout<<name<<endl<<salary<<endl<<empCode;
			
		}
};
int main(){
	employee emp1("Rahul",50000,123);
	emp1.displayinfo();
	return 0;
}
