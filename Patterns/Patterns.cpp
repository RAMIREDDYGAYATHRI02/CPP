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
void print3(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print4(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
void print5(int n){
    for(int i=1;i<n;i++){
        for(int j=1;j<n-i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print6(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print7(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            cout<<i<<""<<j<<" ";
        }
        cout<<endl;
    }
}
void print8(int n){
    for(int i=0;i<n;i++){
        for(int j=1;j<n-i;j++){
            cout<<i<<""<<j<<" "<<i<<""<<j<<" ";
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
        cout<<endl;
        print3(n);
        cout<<endl;
        print4(n);
        cout<<endl;
        print5(n);
        cout<<endl;
        print6(n);
        cout<<endl;
        print7(n);
        cout<<endl;
        print8(n);
        cout<<endl;
        print8(n);
    }
    return 0;
}