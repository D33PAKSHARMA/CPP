#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[3][3]={{2,3,4},{5,5,4},{8,6,9}};
    for(int i=0;i<3;i++){
        for (int j=i;j<3;j++){
            //swap
             int temp=arr[i][j];
             arr[i][j]=arr[j][i];
             arr[j][i]=temp;
        }
    }
   
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}