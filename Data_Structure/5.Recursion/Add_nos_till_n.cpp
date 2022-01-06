#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if (n==0)     //Base case
       return 0;

    return n+ sum(n-1);
}
int main(){
    cout<<sum(5)<<endl;
}