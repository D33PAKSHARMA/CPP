#include<iostream>
using namespace std;
class node{
public:
	int data;
	node* next;

	node(int val){
		data=val;
		next=NULL;
	}
};
    node* head=NULL;
void insertATtail(int data){
	node* new_node=new node(data);
	if(head==NULL){
		head=new_node;
		return;
	}
	node* temp=head;
	while(temp->next!=NULL)
		temp=temp->next;

	temp->next=new_node;
}

void display(){
    node* ptr=head;
    while(ptr!=NULL){
    	cout<<ptr->data<<"-->";
    	ptr=ptr->next;
    }	
    cout<<"NULL"<<endl;
}

int main(){
	// node* head=NULL;
	insertATtail(8);
	insertATtail(6);
	insertATtail(5);
	insertATtail(1);
	insertATtail(3);
	display();

	return 0;
}