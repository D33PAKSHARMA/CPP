#include<bits/stdc++.h>
using namespace std;
void count(int arr[],int n){
    unordered_map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

}
int main(){
    int arr[]={2,3,2,4,5,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    count(arr,n);
    return 0;
}