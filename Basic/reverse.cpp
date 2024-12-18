#include<iostream>
using namespace std;
int main(){
    int remainder,reverse_number=0,n;
    cout<<"Enter a number  : ";
    cin>>n;
    while(n!=0)
    {
        remainder=n%10;
        reverse_number=reverse_number*10+remainder;
        n=n/10;
    }
    cout<<"The reverse number is : "<<reverse_number;
}
