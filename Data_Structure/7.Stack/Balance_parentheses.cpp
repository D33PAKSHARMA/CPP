#include<bits/stdc++.h>
using namespace std;
bool isvalid(string s){
    stack<char>str;
    bool ans=true;
    for(int i=0;i<s.size();i++){
        if(s[i]=='{' or s[i]=='(' or s[i]=='['){
            str.push(s[i]);
        }
        else if(s[i]==')'){
            if(!str.empty() and str.top()=='('){
                str.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(s[i]==']'){
            if(!str.empty() and str.top()==']'){
                str.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(s[i]=='}'){
            if(!str.empty() and str.top()=='}'){
                str.pop();
            }
            else{
                ans=false;
                break;
            }
        }
    }
    if (!str.empty())
       return false;
    
    return ans;
}
int main(){
      string s="{[()]}";
      if(isvalid(s)){
          cout<<"valid string"<<endl;
      }
      else{
          cout<<"invalid string"<<endl;
      }
      return 0; 
}