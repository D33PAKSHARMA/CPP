#include<bits/stdc++.h>
using namespace std;
void print(set<string>&s){
      for(string value:s){
          cout<<value<<endl;
      }
}
int main(){
    set<string>s;
    s.insert("abc");//log(n)
    s.insert("dhg");
    s.insert("dgfg");
    auto it=s.find("abc");//log(n)
    if(it !=s.end()){
        cout<<(*it);
    }
    print(s);
}