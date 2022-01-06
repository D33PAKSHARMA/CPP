#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of Array:";
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
         cin>>arr[i];//Input array
    }
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        // if(arr[i]>mx){
        //     mx=arr[i];
        //     }
         mx=max(mx,arr[i]);//Second method using max() function.
    }
    cout<<"Maximum is:"<<mx;
}