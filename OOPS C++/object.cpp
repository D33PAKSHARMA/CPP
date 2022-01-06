#include<iostream>
using namespace std;

class employee{
public:
	int id;
	string name;
	float salary;


	void insert(int i,string n,float sal){
		id=i;
		name=n;
		salary=sal;
	}
	void dispaly(){
		cout<<id<<" "<<name<<" "<< salary<<endl;
	}
};
int main(){
	employee e1;
	employee e2;
	e1.insert(201,"Deepak",20003.22);
	e2.insert(202,"Deepika",20002.22);
	e1.dispaly();
	e2.dispaly();
	
}