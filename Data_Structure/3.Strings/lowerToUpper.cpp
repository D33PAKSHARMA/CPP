#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string:";
    cin>>str;
    for(int i=0;i<str.size();i++){
        //to upper case
        if(str[i]>='a' && str[i]<='z')
               str[i]-=32;//for upper to lower case str[i]+=32
    }
    for(int i=0;i<str.size();i++){
        cout<<str[i]<<" ";
    }
}
