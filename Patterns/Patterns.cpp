#include<iostream>
using namespace std;
void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cout<<"Enter how many times you want to enter? :";
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cout<<"Enter how many starts? :";
        cin>>n;
        print1(n);
        cout<<endl;
        print2(n);
    }
    return 0;
}