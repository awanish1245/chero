#include<iostream>
using namespace std;
int main (){
    cout<<"enter an integer: ";
    int n ;
    cin>>n;
    if((n%5==0||n%3==0) && n%15!=0){
        cout<<"number is  divisible by 5 or 3 but not 15";
    }else{
        cout<<"condition not matching";
        
    }

    return 0;
}
