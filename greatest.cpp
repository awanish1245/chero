#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"enter a 1st number: ";
    cin>>a;
    cout<<"enter a 2nd number: ";
    cin>>b;
    cout<<"enter a 3rd number: ";
    cin>>c;
    if(a>b && a>c){
        cout<<a<<"is largest";
    }
    if(b>c && b>a){
        cout<<b<<"is largest";
    }
    if(c>a && c>b){
        cout<<c<<"is largest";
    }

}
