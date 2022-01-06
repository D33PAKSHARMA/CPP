#include <bits/stdc++.h>
using namespace std;
void print(map<int,string> &m){
    for (auto &pr: m){
        //v.size()--->o(1)
        cout <<pr.first <<" "<< pr.second<<endl;
    }
}
int main(){
    map<int,string>m;//decleration of Map
    m[1]="abcd";// o(log(n))
    m[5]="hgfh";//1st ways to insert vslue in maps
    m[3]="jfjf";
    m.insert({4,"afg"});//2nd way to insert value in maps..
    auto it=m.find(6);//o(log(n)) find values in maps
    if (it!=m.end())
      m.erase(it);//log(1)
    m.clear();  
    if(it==m.end()){
        cout<<"NO value";
    }
    else
    cout<<(*it).first<<" "<<(*it).second<<endl;
    
    print(m);
    
}