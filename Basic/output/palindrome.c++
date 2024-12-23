#include<iostream>
using namespace std;
int main(){
  int n,rev=0,digit,num;
  cout<<"Enter the number:";
  cin>>n;
  num=n;
  do{
   digit=num%10;
   rev=(rev*10)+digit;
   num=num/10;
  }while(num!=0);
  cout<<"Reverse number:"<<rev<<endl;
  if(n==rev and n>0){
    cout<<"Palindrome";
  }
  else{
  cout<<"Not palindrome";
  }
  return 0;
}