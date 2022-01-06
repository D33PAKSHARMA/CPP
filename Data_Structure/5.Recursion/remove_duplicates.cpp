#include<bits/stdc++.h>
using namespace std;

string removestr(string s){
    if(s.length()==0)
        return "";

    char ch=s[0];
    string ans=removestr(s.substr(1));

    if(ch==ans[0])
      return ans;

    return (ch + ans);
}
int main(){
    string s;
    cout<<"Enter a string:";
    cin>>s;
    removestr(s);
}//Time complexity:O(n^2)
 //space   "      :O(n^2)