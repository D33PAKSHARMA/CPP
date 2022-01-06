#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter rows and columns:";
    cin>>r>>c;
    int arr[r][c];
    cout<<"Enter array elements:"<<endl;
    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Print array elements:"<<endl;
  for(int i=0;i<r;i++){
       for (int j=0;j<c;j++){
           cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}