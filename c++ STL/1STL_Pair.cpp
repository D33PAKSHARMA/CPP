#include <bits/stdc++.h>
using namespace std;
int main(){

    // pair<1,2> p;//Syntax of pair

    pair<int,string>p; //this is pair of integer and string.
     //p=make_pair(2,"abcd");//1st method to declare a pair
     p={2,"abcd"};//2nd method to declare a pair.
     cout<<p.first<<" "<<p.second<<endl;//output of pair
    pair<int,string> &p1=p;//copy p into p1(& gives actual values of p in p1)
    int a[]={1,2,3};
    int b[]={2,3,4};
    pair<int,int>p_array[3];//pair of array
    p_array[0]={1,2};
    p_array[1]={3,4};
    p_array[2]={4,5};
    swap(p_array[0],p_array[2]);//swap pair[0] to pair[2].
    for(int i=0;i<3;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
}