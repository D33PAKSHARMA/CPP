#include<iostream>
using namespace std;
#define n 100
class stack{
    int top;
public:
    int arr[n];//Array implimentation
    stack(){
        top=-1;
    }
    void push(int x){
         if(top==n-1){
         cout<<"Stack overflow";
         return;
        }
            arr[++top]=x;
            cout<<x<<" "<<"pushed into stack"<<endl;
    }
    int pop(){
        if(top==-1){
        cout<<"Nothing to pop!";
        return 0;
        }
        else{
        int x=arr[top++];
        return x;
        } 
    }
    int Top(){
        if(top==-1){
            cout<<"No element in stack!";
            return -1;
        }
        return arr[top];
    }
    bool isempty(){
        return top==-1;
    }

};
int main(){
    stack st;
    st.push(5);
    st.push(4);
    st.push(9);
    st.push(7);
    cout<<st.pop()<<" "<<"Poped from stack"<<endl;
    cout<<st.Top();
}