#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"enter 1st number : ";
    cin>>a;
    cout<<"enter a 2nd number: ";
    cin>>b;
    cout<<"enter a 3rd number : ";
    cin>>c;
    if(a>b){
        if(a>c){
         cout<<a<<"is greatest";
        }
        else{
         cout<<c<<"is greatest";
        }
    }    
    else{ 
        if(b>c){
            cout<<b<<"is greatest";
        }
        else{
            cout<<c<<"is greatest";
        }
    }




}
