#include<bits/stdc++.h>
using namespace std;
// void reverse(string str){
//     if(str.length()==0)
//      return ;
//     reverse(str.substr(1));
//     cout<<str[0];
// }
// int main(){
//     string s;
//     cout<<"Enter a string:";
//     cin>>s;
//     reverse(s);
// }//Time complexity:O(n^2)
//  //space   "      :O(n^2)

//2nd way
int main(){
    string str;
    cout<<"Enter a string:";
    cin>>str;
    for(int i=str.size()-1;i>=0;i--){
        cout<<str[i];
    }
}