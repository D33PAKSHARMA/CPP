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
    int max_sum=INT_MIN;int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=j;k<=i;k++){
                sum+=arr[k];
            }
            max_sum=max(max_sum,sum);
        }
    }
    cout<<max_sum<<" ";
}