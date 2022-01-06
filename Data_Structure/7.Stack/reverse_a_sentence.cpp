#include<bits/stdc++.h>
using namespace std;
void reverse(string s){
    stack<string>str;
    for(int i=0;i<s.length();i++){
        string ch= "";
        while(s[i]!= ' ' && i<s.length()){
            ch+=s[i];
            i++;
        }
        str.push(ch);

    }
    while(!s.empty()){
        cout<<str.top()<<" ";
        str.pop();
    }
    cout<<endl;
}
int main(){
    string s="hey! how are you";
    reverse(s);
}
