#include<bits/stdc++.h>
//#include<array>
using namespace std;
int main(){

      //int arr[4]={1,2,3,5};//Basic array.

    array<int,4>arr={5,2,3,1};//STL array.

    

    int size=arr.size();//Gives size of array
    for (int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"Element at 2nd index:"<<arr.at(2)<<endl;

    cout<<"Empty or not:"<<arr.empty()<<endl;

    cout<<"First element:"<<arr.front()<<endl;

    cout<<"last element :"<<arr.back()<<endl;

    int max=*max_element(arr.begin(),arr.end());

    int min=*min_element(arr.begin(),arr.end());

    cout<<"maximum element:"<<max;

    cout<<"minimum element:"<<min;

//NOTE:    * You cannot use these operations on simple array.
    //     *These operations only works on STL array.
    //     *You can use these operations on vectors also.   

}