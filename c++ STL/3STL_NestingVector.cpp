
#include <bits/stdc++.h>
using namespace std;
void printvec(vector<int>&v){
    for (int i = 0; i < v.size(); i++){
        //v.size()--->o(1)
        cout <<v[i];//.first <<" "<< v[i].second;
}
        cout<<endl;
}
// int main(){
//     //vector<pair<int,int>>v={{1,2},{2,3},{3,4}};//declaration of vector of pair
//     vector<pair<int,int>>v;
//     printvec(v);
//     int n;
//     cin>>n;
//      for (int i = 0; i < n; i++){
//          int x,y;
//          cin>>x>>y;
//          v.push_back({x,y});//add values in pair.
        
//     }
//     printvec(v);
// }
int main(){
    int N;
    cin>>N;
    vector<int >v[N];//vector of arrray.
    for (int i = 0; i < N; i++){
        int n;
        cin>>n;
        // for adding elements in vector of array
        for (int j = 0; j < n; j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }   
    }
    for (int i = 0; i < N; i++)
    {
       printvec(v[i]);
    }
    
}