#include <bits/stdc++.h>
using namespace std;
/*void printvec(vector<int>v){
    for (int i = 0; i < v.size(); i++){
        //v.size()--->o(1)
        cout<<v[i]<<" ";
    }
        cout<<endl;
}*/
    
int main(){
    /* vector<int>v;//vector declaration syntax
    int n;
    cout<<"enter value of n:";                       
    cin>>n;
    for (int i = 0; i <=n; i++)                     
    {
        int x;
        cin>>x;
        v.push_back(x);//add elements at end of vector.
    }
     printvec(v);
}*/
    vector<int >v={3,6,7};

    v.push_back(5);//add elements in the vector 
    
    v.push_back(4);
    v.push_back(4);
    cout<<v.capacity()<<endl;
    cout<<count(v.begin(),v.end(),4)<<endl;//count the occurence of any element in array and vector
    
    
    //v.capacity();

    for(int i:v){
       cout<<i<<" ";
    }cout<<endl;

    //v.pop_back();//remove last element of vector.

    
    //vector<int>&v2=v;//copy v in v2.

}