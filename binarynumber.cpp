#include<iostream>
using namespace std;
void bintodec(int binnum){
    int n = binnum;
    int decnum=0;
    int pow=1;

    while(n>0){
        int lastdig=n% 10;
        decnum += lastdig*pow;
        pow=pow*2;
        n = n/10;
    }
    cout<<decnum<<endl;
}
void dectobin(int decnum){
    int n = decnum;
    int pow=1;
    int binnum=0;
    while(n>0){
        int rem=n%2;
        binnum+=rem*pow;
        n=n/2;
        pow=pow*10;

    }
    cout<<binnum<<endl;
}
int main () {
    bintodec(100);
    dectobin(4);
    return 0;
}