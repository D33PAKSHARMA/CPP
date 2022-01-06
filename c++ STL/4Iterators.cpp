#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={2,3,4,5,6};
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int>::iterator it;//declaration of iterator
    for (it = v.begin(); it !=v.end() ; i++)
    {
       cout<<(*it)<<endl;
    }  
}

//How to write iterator code in short..

for(int &value : v){//you can replace for loop for this Range based loop
    cout <<value<<" ";
}
cout <<endl;

//auto keyword-->it automatically detect the datatype of variable
for(auto &i :v){//it automatically detect v is a vector and "&" give original value not copy
    cout<<i<<" ";
}
