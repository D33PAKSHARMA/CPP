#include<iostream>
using namespace std;
class student {
public:
	int id;
	string name;
};
int main(){
	student s;//object of a class
	s.id=290;
	s.name="Deepak";

	cout<<s.id<<endl;
	cout<<s.name<<endl;
}