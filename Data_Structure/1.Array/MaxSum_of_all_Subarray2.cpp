#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];//Decreration of array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;int mx=INT_MIN;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum +=arr[j];
        }
        mx=max(mx,sum);
        
    }
    cout<<mx<<endl;
}//Time complexity:O(N^2)