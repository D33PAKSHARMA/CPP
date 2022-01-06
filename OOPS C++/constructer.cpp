

// Constructor has same name as the class itself
// Constructors don’t have return type
// A constructor is automatically called when an object is created.
// It must be placed in public section of class.


#include<iostream>
using namespace std;
class Employee {
public:
	int id;
	string name;
	float salary;

	Employee(int i,string n,float s) //Constructor has same name as the class itself
		{
		id=i;
		name=n;
		salary=s;
	} 

	void display(){
		cout<<id<<" "<<name<<" "<<salary<<endl;
	}
};
int main(){
	Employee e1=Employee(2121,"njdhhj",354.54);
	Employee e2=Employee(1554,"jhjhjh",4545.54);

	e1.display();
	e2.display();
}