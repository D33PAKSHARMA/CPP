#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
         cin>>arr[i];
    }
    int currSum=0;
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        currSum+=arr[i];
        if(currSum<0)
          currSum=0;
    mx=max(mx,currSum);
    }
    cout<<mx<<endl;
}