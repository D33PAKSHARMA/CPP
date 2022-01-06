#include<iostream>          //NOTE:  x ^ x=0
                            //       x ^ 0=x
using namespace std;
int main(){
   int a,b;
   cin>>a>>b;

   a=a^b;

   b=b^a;//a=a^b-->b^(a^b)-->(b^b^a)==a//because xor of two no are 0

   a=a^b;//a=a^b-->a^b ^ a(by last eq)-->a^a^b==b

   cout<<a<<" "<<b;//nos. are swap 

}