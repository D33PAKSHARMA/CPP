#include<iostream>
using  std::string;
class person{
private:
    string name;
    int age;
    int roll;
public:
    void setName(string n){//Setter for Name
        name=n;
    }
    string getName(){//Getter for Name
        return name;
    }
    void setAge(int a){//Setter for age
        if(a>=18)
            age =a;
    }
    int getAge(){//Getter for age
        return age;
    }
    void setRoll(int r){//Setter for roll no.
        roll =r;
    }
    int getRoll(){//Getter for roll no.
        return roll;
        }
    person(string n,int a,int r){
        name=n;
        age=a;
        roll=r;
    }
    void print(){
        std::cout<<"The name is:"<<name<<std::endl;
        std::cout<<"Age is:"<<age<<std::endl;
        std::cout<<"Roll number is:"<<roll<<std::endl;
    }
      
};
int main(){
    person p1=person("Deepak",20,41);
    person p2=person("Keshnath",21,57);
    p1.setAge(15);
    std::cout<<p1.getName()<<" is "<<p1.getAge()<<" year old "<<std::endl;
    p2.print();
}