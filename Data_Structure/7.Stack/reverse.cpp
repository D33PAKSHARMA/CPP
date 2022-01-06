#include<iostream>
using namespace std;

void revese(string st){
	stack<string>s;
	for (int i=0;i<st.size();i++){
		string word=" ";
         while(st[i]==' ' && i<.st.size()){
         	word=word+arr[i];
         	i++;
         }
         stack.push(word);
	}
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
}
int main(){
	string s="hey how are you?";
	reverse(s);
}