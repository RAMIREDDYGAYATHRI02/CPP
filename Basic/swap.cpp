#include<iostream>
using namespace std;
int main(){
int i,j,temp;
cout<<"Enter the first number:";
cin>>i;
cout<<"Enter the secound number:";
cin>>j;
temp=i;
i=j;
j=temp;
cout<<"The first number is:"<<i<<endl;
cout<<"The secound number is:"<<j<<endl;
}