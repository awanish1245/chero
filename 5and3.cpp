#include<iostream>
using namespace std;
int main(){
    cout<<"enter a number";
    int n;
    cin>>n;
    if(n%5==0 && n%3==0){
       cout<<"number is divisible by 5 and 3";
    } else{
        cout<<"number is not divisible by 5 and 3";
    }

}